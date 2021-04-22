#ifndef SPDK_CONFIG_H
#define SPDK_CONFIG_H
#define SPDK_CONFIG_ARCH native
#undef SPDK_CONFIG_ASAN
#undef SPDK_CONFIG_CET
#undef SPDK_CONFIG_COVERAGE
#define SPDK_CONFIG_CROSS_PREFIX 
#undef SPDK_CONFIG_CRYPTO
#undef SPDK_CONFIG_CUSTOMOCF
#undef SPDK_CONFIG_DEBUG
#define SPDK_CONFIG_DPDK_DIR /root/spdk/dpdk/build
#define SPDK_CONFIG_ENV /root/spdk/lib/env_dpdk
#define SPDK_CONFIG_EXAMPLES 1
#undef SPDK_CONFIG_FC
#define SPDK_CONFIG_FC_PATH 
#undef SPDK_CONFIG_FIO_PLUGIN
#define SPDK_CONFIG_FIO_SOURCE_DIR /usr/src/fio
#undef SPDK_CONFIG_FUSE
#undef SPDK_CONFIG_IDXD
#undef SPDK_CONFIG_IPSEC_MB
#define SPDK_CONFIG_ISAL 1
#undef SPDK_CONFIG_ISCSI_INITIATOR
#undef SPDK_CONFIG_LTO
#undef SPDK_CONFIG_NVME_CUSE
#undef SPDK_CONFIG_OCF
#define SPDK_CONFIG_OCF_PATH 
#undef SPDK_CONFIG_PGO_CAPTURE
#undef SPDK_CONFIG_PGO_USE
#undef SPDK_CONFIG_PMDK
#define SPDK_CONFIG_PMDK_DIR 
#define SPDK_CONFIG_PREFIX /usr/local
#undef SPDK_CONFIG_RAID5
#undef SPDK_CONFIG_RBD
#undef SPDK_CONFIG_RDMA
#define SPDK_CONFIG_RDMA_PROV verbs
#undef SPDK_CONFIG_RDMA_SEND_WITH_INVAL
#undef SPDK_CONFIG_RDMA_SET_ACK_TIMEOUT
#undef SPDK_CONFIG_REDUCE
#undef SPDK_CONFIG_SHARED
#define SPDK_CONFIG_TESTS 1
#undef SPDK_CONFIG_TSAN
#undef SPDK_CONFIG_UBSAN
#define SPDK_CONFIG_UNIT_TESTS 1
#undef SPDK_CONFIG_URING
#define SPDK_CONFIG_URING_PATH 
#undef SPDK_CONFIG_VFIO_USER
#define SPDK_CONFIG_VFIO_USER_DIR 
#define SPDK_CONFIG_VHOST 1
#define SPDK_CONFIG_VIRTIO 1
#undef SPDK_CONFIG_VTUNE
#define SPDK_CONFIG_VTUNE_DIR 
#undef SPDK_CONFIG_WERROR
#define SPDK_CONFIG_WPDK_DIR 
#endif /* SPDK_CONFIG_H */
