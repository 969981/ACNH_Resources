
undefined8 FUN_0331ec40(long *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bc1118;
  if (*(char *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x16969) != '\0') {
    uVar4 = (**(code **)(*param_1 + 0x160))();
    lVar8 = param_1[100];
    if ((lVar8 != 0) && (*(char *)(lVar8 + 2000) == '\0')) {
      lVar9 = lVar8 + 0x230;
      if ((*(long *)(lVar8 + 0x20) != lVar9) && (*(long *)(lVar8 + 0x20) != lVar8 + 0x2d8)) {
        FUN_03292228(*(undefined8 *)(lVar8 + 0x4f8));
        lVar6 = *(long *)(lVar8 + 0x20);
        if (((lVar6 != lVar9) && (lVar6 != lVar8 + 0x2d8)) && (lVar6 != lVar8 + 0x38)) {
          if (((lVar6 != 0) && (-1 < *(int *)(lVar8 + 0x30))) &&
             (*(long **)(lVar6 + 0x80) != (long *)0x0)) {
            (**(code **)(**(long **)(lVar6 + 0x80) + 0x20))();
          }
          *(long *)(lVar8 + 0x28) = lVar9;
          *(undefined4 *)(lVar8 + 0x30) = 0xffffffff;
        }
        *(undefined1 *)(param_1 + 0x2f9) = 0;
        lVar8 = DAT_0572ba48;
        plVar10 = (long *)param_1[0x72];
        if (*plVar10 == 0) {
          puVar7 = (undefined8 *)(DAT_0572ba48 + 8);
          puVar3 = (undefined8 *)*puVar7;
          if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
            *puVar7 = plVar10;
          }
          else {
            do {
              puVar7 = puVar3;
              puVar3 = (undefined8 *)puVar7[2];
            } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
            puVar7[2] = plVar10;
            plVar10[1] = (long)puVar7;
            puVar7 = (undefined8 *)*puVar7;
          }
          *plVar10 = (long)puVar7;
          FUN_0328fad0(lVar8);
          uVar1 = local_48 >> 0x20;
          local_48 = local_48 & 0xffffffff00000000;
          if ((*(uint *)((long)plVar10 + 0x2c) & 1) == 0) {
            *(undefined8 *)(lVar8 + 0xa8) = 0;
            local_48 = CONCAT44((int)uVar1,1);
            *(byte *)(lVar8 + 0xd4) = *(byte *)(lVar8 + 0xd4) & 0xfd;
          }
        }
        FUN_032924d0(param_1[0x72],param_1[0x73]);
        (**(code **)(*param_1 + 0x118))(param_1);
        return 0;
      }
    }
    if (*(long *)(DAT_0572c460 + 0x18) == *(long *)(DAT_0572c460 + 0x10) &&
        ((uVar4 ^ 0xffffffff) & 1) == 0) {
      lVar9 = *(long *)puVar2;
      *(undefined1 *)((long)param_1 + 0x15f1) = 1;
      *(undefined1 *)((long)param_1 + 0x17e2) = 0;
      local_48 = local_48 & 0xffffffff00000000;
      *(byte *)(param_1[0x73] + 0x1c8) = *(byte *)(param_1[0x73] + 0x1c8) & 0xfb;
      *(ushort *)(param_1 + 0x7e) = *(ushort *)(param_1 + 0x7e) & 0xfffe;
      FUN_032c2100(param_1 + 0x74);
      lVar8 = *(long *)(*(long *)(lVar9 + 0x20) + 0x17f8);
      if (lVar8 != 0) {
        lVar6 = 0;
        *(undefined1 *)(lVar8 + 0x16da) = 0;
        do {
          lVar5 = lVar8 + lVar6;
          lVar6 = lVar6 + 0x40;
          *(undefined1 *)(lVar5 + 0x6dc) = 0;
          *(undefined4 *)(lVar5 + 0x6e0) = 0;
          *(undefined8 *)(lVar5 + 0x6d4) = 0;
          *(undefined1 *)(lVar5 + 0x6ec) = 0;
          *(undefined8 *)(lVar5 + 0x6e4) = 0;
          *(undefined4 *)(lVar5 + 0x6f0) = 0;
          *(undefined8 *)(lVar5 + 0x6f4) = 0;
          *(undefined1 *)(lVar5 + 0x6fc) = 0;
          *(undefined4 *)(lVar5 + 0x700) = 0;
          *(undefined1 *)(lVar5 + 0x70c) = 0;
          *(undefined8 *)(lVar5 + 0x704) = 0;
          *(undefined4 *)(lVar5 + 0x710) = 0;
        } while (lVar6 != 0x1000);
      }
      lVar8 = param_1[100];
      if ((lVar8 != 0) && (*(char *)(lVar8 + 2000) == '\0')) {
        lVar6 = lVar8 + 0x230;
        if ((*(long *)(lVar8 + 0x20) != lVar6) && (*(long *)(lVar8 + 0x20) != lVar8 + 0x2d8)) {
          FUN_03292228(*(undefined8 *)(lVar8 + 0x4f8));
          lVar5 = *(long *)(lVar8 + 0x20);
          if (((lVar5 != lVar6) && (lVar5 != lVar8 + 0x2d8)) && (lVar5 != lVar8 + 0x38)) {
            if (((lVar5 != 0) && (-1 < *(int *)(lVar8 + 0x30))) &&
               (*(long **)(lVar5 + 0x80) != (long *)0x0)) {
              (**(code **)(**(long **)(lVar5 + 0x80) + 0x20))();
            }
            *(long *)(lVar8 + 0x28) = lVar6;
            *(undefined4 *)(lVar8 + 0x30) = 0xffffffff;
          }
          plVar10 = (long *)param_1[0x72];
          *(undefined1 *)(param_1 + 0x2f9) = 0;
          lVar8 = DAT_0572ba48;
          if (*plVar10 == 0) {
            puVar7 = (undefined8 *)(DAT_0572ba48 + 8);
            puVar3 = (undefined8 *)*puVar7;
            if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
              *puVar7 = plVar10;
            }
            else {
              do {
                puVar7 = puVar3;
                puVar3 = (undefined8 *)puVar7[2];
              } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
              puVar7[2] = plVar10;
              plVar10[1] = (long)puVar7;
              puVar7 = (undefined8 *)*puVar7;
            }
            *plVar10 = (long)puVar7;
            FUN_0328fad0(lVar8);
            uVar1 = local_48 >> 0x20;
            local_48 = local_48 & 0xffffffff00000000;
            if ((*(uint *)((long)plVar10 + 0x2c) & 1) == 0) {
              *(undefined8 *)(lVar8 + 0xa8) = 0;
              local_48 = CONCAT44((int)uVar1,1);
              *(byte *)(lVar8 + 0xd4) = *(byte *)(lVar8 + 0xd4) & 0xfd;
            }
          }
          FUN_032924d0(param_1[0x72],param_1[0x73]);
          (**(code **)(*param_1 + 0x118))(param_1);
        }
      }
      lVar8 = *(long *)(DAT_05734b90 + 8);
      if (lVar8 != 0) {
        local_48 = 0;
        lVar6 = 0;
        if (*(char *)(lVar8 + 0x38) != '\0') {
          lVar6 = lVar8 + 8;
        }
        FUN_03366350(DAT_05734b90,lVar6,s_Decide_KeyAssignBottonX_04b208d0,0,&local_48,0);
      }
      FUN_032fc340(lVar9);
      if (((param_1[5] != 0) && (-1 < (int)param_1[7])) &&
         (plVar10 = *(long **)(param_1[5] + 0x80), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x20))();
      }
      param_1[6] = (long)(param_1 + 0x47);
      *(undefined4 *)(param_1 + 7) = 0xffffffff;
      return 1;
    }
  }
  return 0;
}

