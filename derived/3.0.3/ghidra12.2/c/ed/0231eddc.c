
undefined8 FUN_0231eddc(long param_1,ulong param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x178) != 0) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x17d0) >> 2 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x17d0) >> 1 & 1) == 0) {
      if ((param_2 & 1) != 0) {
LAB_0231ee28:
        local_16 = *(undefined2 *)(param_1 + 0x1d76);
        local_18 = *(undefined2 *)(param_1 + 0x1d74);
        local_14 = *(undefined4 *)(param_1 + 0x1d78);
        lVar3 = *(long *)PTR_DAT_04bb43c0;
        uVar2 = FUN_0277d6c4(&local_18);
        if (*(long *)puVar1 != 0) {
          lVar3 = *(long *)(lVar3 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            FUN_023277b0(param_1 + 0x1ee8,&local_18);
          }
        }
        if ((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) {
          FUN_0232c350(param_1);
          FUN_0232d230(param_1);
          FUN_0232def0(param_1);
        }
        return 1;
      }
    }
    else if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) goto LAB_0231ee28;
  }
  else if (*(char *)(param_1 + 0x1ee0) != '\0') goto LAB_0231ee28;
  return 0;
}

