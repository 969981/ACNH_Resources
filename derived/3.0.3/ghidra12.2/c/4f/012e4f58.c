
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012e4f58(short *param_1,long param_2,long param_3,long param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined1 auStack_90 [8];
  long *local_88;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined **local_70;
  uint local_68;
  uint uStack_64;
  
  plVar17 = (long *)(param_2 + 0x28);
  iVar2 = *(int *)(param_3 + 0xc);
  iVar3 = *(int *)(param_2 + 0x14);
  uVar6 = *(int *)(param_3 + 8) - *(int *)(param_2 + 0x10);
  plVar10 = (long *)(**(code **)*plVar17)(plVar17);
  uVar7 = (**(code **)(*plVar10 + 0x18))();
  if (uVar6 < uVar7) {
    uVar7 = iVar2 - iVar3;
    plVar10 = (long *)(**(code **)*plVar17)(plVar17);
    uVar8 = (**(code **)(*plVar10 + 0x20))();
    if (((uVar7 < uVar8) && (uVar11 = (**(code **)(*plVar17 + 0x10))(plVar17), (uVar11 & 1) != 0))
       && (lVar12 = (**(code **)*plVar17)(plVar17), lVar12 != 0)) {
      if (((*(long *)(param_2 + 0x1b8) != 0) && (uVar6 < *(uint *)(param_2 + 0x1c8))) &&
         (uVar7 < *(uint *)(param_2 + 0x1cc))) {
        iVar2 = *(int *)(param_2 + 0x1c4);
        uVar8 = uVar6 + *(uint *)(param_2 + 0x1c8) * uVar7;
        *(int *)(param_2 + 0x1c4) = iVar2 + 1;
        if (((int)uVar8 < 0) || (*(int *)(param_2 + 0x1c0) <= (int)uVar8)) {
          *(int *)(param_2 + 0x1c4) = iVar2;
        }
        else {
          uVar9 = *(uint *)(*(long *)(param_2 + 0x1b8) + (ulong)(uVar8 >> 5) * 4);
          *(int *)(param_2 + 0x1c4) = iVar2;
          if ((uVar9 >> (ulong)(uVar8 & 0x1f) & 1) != 0) goto LAB_012e5060;
        }
      }
      plVar10 = (long *)(**(code **)*plVar17)(plVar17);
      uVar8 = (**(code **)(*plVar10 + 0x18))();
      uVar9 = (**(code **)(*plVar10 + 0x20))(plVar10);
      if (uVar8 <= uVar6) {
        uVar6 = 0;
      }
      if (uVar9 <= uVar7) {
        uVar7 = 0;
      }
      if (((long *)plVar10[5] == (long *)0x0) ||
         (puVar13 = *(undefined8 **)plVar10[5], puVar13 == (undefined8 *)0x0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = (**(code **)*puVar13)();
        uVar8 = uVar8 ^ 1;
      }
      lVar12 = (**(code **)(*plVar10 + 0x28))(plVar10,uVar6,uVar7);
      psVar1 = (short *)(lVar12 + plVar10[1]);
      sVar5 = *psVar1;
      if (sVar5 == -3) {
        iVar3 = *(int *)(param_3 + 0xc) - (*(uint *)(psVar1 + 2) >> 0x18);
        iVar2 = *(int *)(param_3 + 8) - (*(uint *)(psVar1 + 2) >> 0x10 & 0xff);
        local_70 = &PTR_FUN_0498d600;
        uVar6 = iVar3 - *(int *)(param_2 + 0x14);
        uVar7 = iVar2 - *(int *)(param_2 + 0x10);
        local_68 = uVar7;
        uStack_64 = uVar6;
        plVar14 = (long *)(*(code *)**(undefined8 **)(param_2 + 0x28))(plVar17);
        uVar9 = (**(code **)(*plVar14 + 0x18))();
        if (uVar7 < uVar9) {
          plVar17 = (long *)(**(code **)*plVar17)(plVar17);
          uVar7 = (**(code **)(*plVar17 + 0x20))();
          if (uVar6 < uVar7) {
            FUN_012e4578(auStack_90,param_2,&local_70);
            lVar15 = (**(code **)(*local_88 + 0x28))(local_88,local_7c,uStack_78);
            lVar16 = local_88[1];
            lVar12 = lVar15 + lVar16;
            if (param_4 != 0) {
              *(int *)(param_4 + 8) = iVar2;
              *(int *)(param_4 + 0xc) = iVar3;
            }
            sVar5 = *(short *)(lVar16 + lVar15);
            param_1[1] = *(short *)(lVar12 + 2);
            *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar12 + 4);
            *param_1 = sVar5;
            FUN_02640184(auStack_90);
            goto joined_r0x012e5200;
          }
        }
        uVar4 = DAT_0558600c;
        *(undefined4 *)param_1 = _DAT_05586008;
        *(undefined4 *)(param_1 + 2) = uVar4;
      }
      else {
        if (param_4 != 0) {
          *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_3 + 8);
          *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_3 + 0xc);
          sVar5 = *psVar1;
        }
        *param_1 = sVar5;
        uVar4 = *(undefined4 *)(psVar1 + 2);
        param_1[1] = psVar1[1];
        *(undefined4 *)(param_1 + 2) = uVar4;
      }
joined_r0x012e5200:
      if ((uVar8 & 1) != 0) {
        return;
      }
      if (plVar10[5] == 0) {
        return;
      }
      puVar13 = *(undefined8 **)(plVar10[5] + 8);
      if (puVar13 == (undefined8 *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x012e5284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar13)();
      return;
    }
  }
LAB_012e5060:
  uVar4 = DAT_0558600c;
  *(undefined4 *)param_1 = _DAT_05586008;
  *(undefined4 *)(param_1 + 2) = uVar4;
  return;
}

