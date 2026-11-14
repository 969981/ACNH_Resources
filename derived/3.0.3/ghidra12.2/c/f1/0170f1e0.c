
bool FUN_0170f1e0(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *__dest;
  long lVar5;
  long lVar6;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  *(undefined2 *)(param_2 + 0x58) = 0;
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_3);
  lVar5 = *(long *)puVar1;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_3;
      uStack_4c = param_3[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_3);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
            local_48 = lVar5;
          }
        }
      }
      iVar3 = FUN_01ad78cc(&local_58);
      if (iVar3 == 0x1c) {
        __dest = *(char **)(param_2 + 8);
        pcVar4 = "CommonSmartPhoneHand";
        if (__dest != "CommonSmartPhoneHand") {
          iVar3 = 0x14;
          if (*(int *)(param_2 + 0x10) < 0x15) {
            iVar3 = *(int *)(param_2 + 0x10) + -1;
          }
          memcpy(__dest,"CommonSmartPhoneHand",(long)iVar3);
          __dest[iVar3] = '\0';
          pcVar4 = *(char **)(param_2 + 8);
        }
        *(undefined2 *)(param_2 + 0x58) = 1;
        return *pcVar4 != '\0';
      }
    }
  }
  return false;
}

