
void FUN_03678be0(long *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint local_cc;
  long *local_c8;
  uint *puStack_c0;
  long *local_b8;
  long *plStack_b0;
  long *local_a8;
  long *plStack_a0;
  long *local_98;
  uint local_8c;
  long local_88;
  long local_80;
  long lStack_78;
  long **local_70;
  undefined8 ***local_68;
  
  uVar4 = nn::os::TryWaitEvent((EventType *)(param_1 + 0x1149));
  if ((uVar4 & 1) != 0) {
    puVar1 = (uint *)(param_1 + 0x1116);
    local_cc = *(uint *)(param_1 + 0x1163);
    if (*puVar1 == 1) {
      param_1[0x6a] = 0;
      memset((void *)((long)param_1 + 0x6c84),0,0x510);
      memset(param_1 + 0x1071,0,0x510);
    }
    uVar3 = local_cc;
    if ((int)param_1[0x115e] == 0) {
      iVar2 = *(int *)((long)param_1 + 0x8aec);
      uVar8 = *(uint *)(param_1 + 0x115d);
      uVar4 = (ulong)(iVar2 - uVar8);
      if (0 < (int)(iVar2 - uVar8)) {
        lVar5 = param_1[0x5b];
        lVar6 = (long)(int)local_cc;
        uVar9 = uVar8 << 8;
        uVar7 = uVar8 << 10;
        lVar10 = *(long *)(lVar5 + 0x2200);
        do {
          if (uVar3 < *(uint *)(param_1 + 0x1160)) {
            lStack_78 = *(long *)(param_1[0x1161] + lVar6 * 8);
          }
          else {
            lStack_78 = 0;
          }
          lStack_78 = lStack_78 + (ulong)uVar7;
          local_80 = lVar10 + (ulong)uVar9;
          local_88 = lVar5 + 0x2208 + (ulong)uVar9;
          local_70 = &local_c8;
          puStack_c0 = &local_8c;
          local_c8 = &local_80;
          local_b8 = &local_88;
          plStack_b0 = &lStack_78;
          local_a8 = &lStack_78;
          plStack_a0 = &local_88;
          local_98 = &local_80;
          local_8c = uVar8;
          if (*puVar1 == 0xffffffff) goto LAB_03678e14;
          local_68 = &local_70;
          (*(code *)(&PTR_LAB_04b42c18)[*puVar1])(&local_68,param_1 + 100);
          uVar4 = uVar4 - 1;
          uVar8 = uVar8 + 1;
          uVar9 = uVar9 + 0x100;
          uVar7 = uVar7 + 0x400;
        } while (uVar4 != 0);
        *(int *)(param_1 + 0x115d) = iVar2;
        if (iVar2 == 0xf0) {
          puStack_c0 = &local_cc;
          local_70 = &local_c8;
          local_c8 = param_1;
          if (*puVar1 == 0xffffffff) {
LAB_03678e14:
            local_70 = &local_c8;
                    /* WARNING: Subroutine does not return */
            FUN_00d72dc0();
          }
          local_68 = &local_70;
          (*(code *)(&PTR_LAB_04b42c00)[*puVar1])(&local_68,param_1 + 100);
          nn::os::SignalEvent((EventType *)(param_1 + 0x1158));
          if (0xef < *(uint *)((long)param_1 + 0x8aec)) {
            nn::os::WaitEvent((EventType *)(param_1 + 0x1158));
            *(undefined4 *)((long)param_1 + 0x8aec) = 0;
            *(undefined4 *)(param_1 + 0x115d) = 0;
          }
        }
      }
    }
  }
  return;
}

