
void FUN_0257b004(char *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  
  if (param_1[0x18] != '\0') {
    return;
  }
  if (*param_1 == '\0') {
    if (param_1[0x19] != '\0') goto LAB_0257b06c;
    param_1[0x19] = '\x01';
    puVar2 = PTR_DAT_04bb43c0;
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_1 + 8);
    if (*(long *)puVar2 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        FUN_02caeec0(*(undefined8 *)PTR_DAT_04bc5c78,param_1 + 8,param_2 + 0xd);
      }
    }
  }
  else {
    if (param_1[0x19] != '\0') goto LAB_0257b06c;
    param_1[0x19] = '\x01';
    FUN_02caf340(DAT_056658d0,*(undefined4 *)(param_1 + 4),param_2 + 0xd);
  }
  if (param_1[0x19] == '\0') {
    return;
  }
LAB_0257b06c:
  if (((*DAT_055c10d8 != '\0') ||
      (((*(char *)(param_2 + 0xe) != '\0' && (*(int *)(param_1 + 0x10) != 0)) &&
       (iVar1 = *(int *)(param_1 + 0x10) + -1, *(int *)(param_1 + 0x10) = iVar1, iVar1 == 0)))) ||
     (((*(int *)(param_1 + 0x1c) == 0 ||
       (iVar1 = *(int *)(param_1 + 0x1c) + -1, *(int *)(param_1 + 0x1c) = iVar1, iVar1 == 0)) &&
      (*(char *)(param_2 + 0xc) != '\0')))) {
    param_1[0x19] = '\0';
    FUN_02cae8a8(*(undefined8 *)PTR_DAT_04bc5c78,param_2 + 0xd);
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x18] = '\x01';
  }
  return;
}

