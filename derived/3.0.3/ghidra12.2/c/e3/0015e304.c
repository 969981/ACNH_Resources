
size_t FUN_0015e304(void *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  size_t __n;
  long lVar2;
  
  lVar1 = *param_4;
  lVar2 = *(long *)(lVar1 + 0x1e8);
  if (*(long *)(lVar2 + 8) == 0) {
    __n = 0;
  }
  else {
    __n = param_3 * param_2;
    *(ushort *)(lVar1 + 0x660) =
         *(ushort *)(lVar1 + 0x660) & 0xfeff | (ushort)(*(int *)(lVar2 + 0x208) == 1) << 8;
    if ((long)__n < (long)*(size_t *)(lVar2 + 8)) {
      memcpy(param_1,*(void **)(lVar2 + 0x10),__n);
      *(size_t *)(lVar2 + 8) = *(long *)(lVar2 + 8) - __n;
      *(size_t *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + __n;
    }
    else {
      memcpy(param_1,*(void **)(lVar2 + 0x10),*(size_t *)(lVar2 + 8));
      __n = *(size_t *)(lVar2 + 8);
      if (*(long *)(lVar2 + 0x200) == 0) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      else {
        *(long *)(lVar2 + 8) = *(long *)(lVar2 + 0x200);
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 0x1f8);
        *(undefined8 *)(*param_4 + 0x1548) = *(undefined8 *)(lVar2 + 0x1e8);
        *(undefined8 *)(*param_4 + 0x1550) = *(undefined8 *)(lVar2 + 0x1f0);
        *(undefined8 *)(lVar2 + 0x200) = 0;
        *(int *)(lVar2 + 0x208) = *(int *)(lVar2 + 0x208) + 1;
      }
    }
  }
  return __n;
}

