
void FUN_0037b814(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long local_40;
  long lStack_38;
  undefined1 local_30 [16];
  
  if ((*(uint *)(param_1 + 0x10) >> 0x10 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x10) >> 0x11 & 1) == 0) {
      plVar1 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) +
                       (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10);
      lStack_38 = plVar1[1];
      local_40 = *plVar1 + (ulong)*(uint *)(param_1 + 0x34);
      if (*(long *)(param_1 + 0x38) == 0) {
        lVar10 = 0x90;
      }
      else {
        lVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0x38) + 4) + 0x90;
      }
      FUN_00348cdc(param_2,*(undefined4 *)
                            (*(long *)(*(long *)(param_1 + 0x20) + 0x28) +
                            (ulong)*(ushort *)(param_1 + 0x4a) * 4),4,&local_40,lVar10);
      uVar4 = *(uint *)(param_1 + 0x14) & 3;
      if (uVar4 != 0) {
        uVar5 = *(uint *)(param_1 + 0x10);
        uVar8 = (ulong)(uVar5 >> 2) & 3;
        lVar6 = ((ulong)uVar5 & 3) * 0x10;
        lVar2 = *(long *)(param_1 + 0x18) + lVar6 + uVar8 * 0x14;
        if (*(char *)(lVar2 + 1) != '\a') {
          if ((uVar4 == 1) || (*(char *)(lVar2 + 0x11) == '\a')) {
            uVar9 = 1;
          }
          else if (uVar4 == 2) {
            uVar9 = 2;
          }
          else {
            uVar9 = 2;
            if (*(char *)(lVar2 + 0x21) != '\a') {
              uVar9 = 3;
            }
          }
          if (uVar4 <= uVar9) {
            return;
          }
        }
        plVar1 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) +
                         (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10);
        lStack_38 = plVar1[1];
        plVar3 = (long *)(*(long *)(param_1 + 0x18) +
                         (((ulong)uVar5 & 0x30) + lVar6 | (ulong)(uVar5 >> 6) & 8) +
                         ((ulong)(uVar5 >> 8) & 0xc) + ((ulong)(uVar5 >> 4) & 0x1c) +
                         ((ulong)(uVar5 >> 0xc) & 8) +
                         ((ulong)(uVar5 >> 0xd) & 0x60) + (ulong)(-(uVar5 >> 0xc & 1) & 0xc) +
                         (ulong)(-(uVar5 >> 0x10 & 1) & 0x1c) +
                         ((ulong)(uVar5 >> 0xc) & 0x10) * ((ulong)(uVar5 >> 6) & 7) +
                         (ulong)((int)(uVar5 << 0xe) >> 0x1f & 0x74) +
                         (((ulong)(uVar5 >> 0xd) & 3) + uVar8) * 0x14);
        local_40 = *plVar1 + *plVar3;
        FUN_00348cdc(param_2,(int)plVar3[1],4,&local_40,lVar10);
      }
      return;
    }
    uVar7 = 0x220;
  }
  else {
    uVar7 = 0xe0;
  }
  FUN_00348cdc(param_2,*(undefined4 *)
                        (*(long *)(*(long *)(param_1 + 0x20) + 0x28) +
                        (ulong)*(ushort *)(param_1 + 0x4a) * 4),4,local_30 + 0x10,uVar7);
  return;
}

