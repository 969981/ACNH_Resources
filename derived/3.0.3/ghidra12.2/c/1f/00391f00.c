
void FUN_00391f00(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined4 param_5,ushort *param_6)

{
  undefined8 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  void *pvVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  undefined1 local_a0;
  undefined1 uStack_9f;
  undefined4 uStack_9e;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  param_1[1] = *(undefined8 *)(param_6 + 4);
  uVar2 = *param_6;
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_3 != 0) {
    uVar3 = *param_6;
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        uVar9 = 0;
        iVar7 = 0;
      }
      else {
        uVar9 = 0;
        iVar7 = 0;
        piVar10 = (int *)(*(long *)(param_6 + 4) + 0x3c);
        do {
          uVar9 = uVar9 + 2;
          if (piVar10[-0xe] != 0) {
            iVar7 = iVar7 + 1;
          }
          if (*piVar10 != 0) {
            iVar7 = iVar7 + 1;
          }
          piVar10 = piVar10 + 0x1c;
        } while (((ulong)uVar3 & 0xfffe) != uVar9);
      }
      if (((uVar3 & 1) != 0) && (*(int *)(*(long *)(param_6 + 4) + uVar9 * 0x38 + 4) != 0)) {
        iVar7 = iVar7 + 1;
      }
      *(int *)(param_1 + 2) = iVar7;
      if (iVar7 != 0) {
        plVar14 = *(long **)(param_1[8] + 0x10);
        *(long **)(param_1[8] + 0x10) = plVar14 + 0x1b;
        if (plVar14 != (long *)0x0) {
          *(undefined4 *)(plVar14 + 2) = 0;
          puVar5 = PTR_DAT_04bd07b8;
          plVar14[7] = 0;
          plVar14[3] = 0;
          plVar14[4] = 0;
          plVar14[5] = 0;
          plVar14[6] = 0;
          *plVar14 = (long)(puVar5 + 0x10);
          plVar14[1] = -1;
          FUN_0034f974(plVar14 + 8);
          FUN_0034f3dc(plVar14 + 0x11);
          plVar14[0x1a] = -0x100000000;
        }
        *param_1 = plVar14;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_9f = 0;
        uStack_9e = 0;
        uStack_9a = 0;
        uStack_98 = 0;
        uStack_96 = 0;
        uStack_94 = 0;
        FUN_0034fd48(&local_a0);
        uStack_88 = CONCAT44(uStack_88._4_4_,param_5);
        uStack_94 = 0x201;
        local_90 = 0xa0;
        uStack_9f = 2;
        uStack_9a = 1;
        uStack_98 = 1;
        uStack_8c = param_4;
        uVar9 = (**(code **)(*(long *)*param_1 + 0x30))();
        if ((uVar9 & 1) == 0) {
          FUN_0038ba78(*param_1,param_2,param_3,&local_a0,0);
        }
        uVar4 = *(uint *)(param_1 + 2);
        pvVar11 = *(void **)(param_1[8] + 0x10);
        *(void **)(param_1[8] + 0x10) = (void *)((long)pvVar11 + (long)(int)uVar4 * 0x28);
        if ((0 < (int)uVar4) && (pvVar11 != (void *)0x0)) {
          memset(pvVar11,0,(ulong)uVar4 * 0x28);
        }
        param_1[3] = pvVar11;
        uVar4 = *(uint *)(param_1 + 2);
        pvVar11 = *(void **)(param_1[8] + 0x10);
        *(void **)(param_1[8] + 0x10) = (void *)((long)pvVar11 + (long)(int)uVar4 * 0x28);
        if ((0 < (int)uVar4) && (pvVar11 != (void *)0x0)) {
          memset(pvVar11,0,(ulong)uVar4 * 0x28);
        }
        param_1[4] = pvVar11;
        if (uVar2 != 0) {
          lVar12 = 0;
          iVar7 = 0;
          do {
            iVar13 = iVar7;
            if (*(int *)(param_1[1] + lVar12 + 4) != 0) {
              lVar6 = ((long)iVar7 + (long)iVar7 * 4) * 8;
              *(undefined1 *)(param_1[4] + lVar6) = 0;
              *(undefined1 *)(param_1[4] + lVar6 + 1) = 0;
              *(undefined2 *)(param_1[4] + lVar6 + 4) = 1;
              *(undefined2 *)(param_1[4] + lVar6 + 2) = 0;
              lVar8 = param_1[4];
              uVar1 = *(undefined8 *)(param_1[1] + lVar12 + 0x10);
              *(undefined8 *)(lVar8 + lVar6 + 0x18) = *(undefined8 *)(param_1[1] + lVar12 + 8);
              *(undefined8 *)(lVar8 + lVar6 + 0x20) = uVar1;
              lVar6 = param_1[4];
              plVar14 = *(long **)(param_1[8] + 0x10);
              *(long **)(param_1[8] + 0x10) = plVar14 + 7;
              if (plVar14 != (long *)0x0) {
                FUN_0038f5f0(plVar14,lVar6 + (long)iVar7 * 0x28);
              }
              *(undefined4 *)(plVar14 + 6) = 0x3dcccccd;
              (**(code **)(*plVar14 + 0x10))(plVar14);
              iVar13 = iVar7 + 1;
              *(long **)(param_1[3] + (long)iVar7 * 0x28 + 8) = plVar14;
            }
            lVar12 = lVar12 + 0x38;
            iVar7 = iVar13;
          } while ((ulong)uVar2 * 0x38 != lVar12);
        }
      }
    }
  }
  return;
}

