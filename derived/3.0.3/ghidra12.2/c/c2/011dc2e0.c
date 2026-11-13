
uint FUN_011dc2e0(long param_1,long param_2,int param_3,undefined2 *param_4,uint param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  iVar7 = *(int *)(param_1 + 0x24f78);
  if (iVar7 < 1) {
    uVar8 = 0;
  }
  else {
    lVar13 = 0;
    uVar8 = 0;
    iVar12 = 0;
    do {
      lVar11 = DAT_05150358;
      lVar2 = param_1 + lVar13;
      if (((*(ushort *)(lVar2 + 0x2e0) & 0x1008) == 8) &&
         (((((param_5 & 1) == 0 || (-1 < *(int *)(lVar2 + 0x2d4))) &&
           (*(int *)(lVar2 + 0x290) == *(int *)(param_2 + 8))) &&
          (*(int *)(lVar2 + 0x294) == *(int *)(param_2 + 0xc))))) {
        puVar1 = (undefined8 *)(lVar2 + 0x278);
        if (param_3 == 7) {
          if (*(char *)(lVar2 + 0x2e6) == -1) {
            local_a8 = *(undefined2 *)puVar1;
            local_a6 = *(undefined2 *)(lVar2 + 0x27a);
            local_a4 = *(undefined4 *)(lVar2 + 0x27c);
            if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
                 ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
                  ((*(long *)(DAT_05150358 + 0x488) != 0 &&
                   (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))))) &&
                (*(long *)(DAT_05150358 + 0x2b0) != 0)) &&
               (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
              uVar8 = FUN_0277d6c4(&local_a8);
              uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
                FUN_0124c030(&local_a0,&local_a8);
                uVar9 = FUN_0123d890(local_90,4);
                if ((uVar9 & 1) != 0) {
                  local_84 = *(undefined8 *)(lVar2 + 0x2a0);
                  local_7c = *(undefined4 *)(lVar2 + 0x2a8);
                  local_66 = *(undefined1 *)(lVar2 + 0x27a);
                  local_68 = *(undefined2 *)puVar1;
                  local_65 = *(undefined1 *)(lVar2 + 0x27b);
                  local_64 = *(undefined4 *)(lVar2 + 0x27c);
                  FUN_011ea808(0,param_1,&local_68,&local_84,&DAT_040eec15);
                }
              }
            }
          }
        }
        else if (param_3 == 5) {
          local_84 = *puVar1;
          if ((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
              (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
             (((*(long *)(DAT_05150358 + 0x488) != 0 &&
               (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)) &&
              ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
               (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
            uVar8 = FUN_0277d6c4(&local_84);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
              FUN_0124c030(&local_a0,&local_84);
              uVar9 = FUN_0124ee28(&local_a0);
              if (((uVar9 & 1) != 0) &&
                 ((iVar7 = FUN_0123db50(local_98,local_90), iVar7 - 0x23U < 9 ||
                  (iVar7 = FUN_0123db50(local_98,local_90), iVar7 - 0x12U < 6)))) {
                if (*(char *)(param_1 + 0x24fa0) == '\0') {
                  lVar11 = 0;
                  pcVar10 = (char *)(param_1 + 0x24fa0);
LAB_011dc77c:
                }
                else if (*(char *)(param_1 + 0x24fb8) == '\0') {
                  lVar11 = 1;
                  pcVar10 = (char *)(param_1 + 0x24fb8);
                }
                else if (*(char *)(param_1 + 0x24fd0) == '\0') {
                  lVar11 = 2;
                  pcVar10 = (char *)(param_1 + 0x24fd0);
                }
                else if (*(char *)(param_1 + 0x24fe8) == '\0') {
                  lVar11 = 3;
                  pcVar10 = (char *)(param_1 + 0x24fe8);
                }
                else if (*(char *)(param_1 + 0x25000) == '\0') {
                  lVar11 = 4;
                  pcVar10 = (char *)(param_1 + 0x25000);
                }
                else if (*(char *)(param_1 + 0x25018) == '\0') {
                  lVar11 = 5;
                  pcVar10 = (char *)(param_1 + 0x25018);
                }
                else if (*(char *)(param_1 + 0x25030) == '\0') {
                  lVar11 = 6;
                  pcVar10 = (char *)(param_1 + 0x25030);
                }
                else {
                  if (*(char *)(param_1 + 0x25048) != '\0') {
                    if (*(char *)(param_1 + 0x25060) == '\0') {
                      lVar11 = 8;
                      pcVar10 = (char *)(param_1 + 0x25060);
                    }
                    else {
                      if (*(char *)(param_1 + 0x25078) != '\0') goto LAB_011dc7f0;
                      lVar11 = 9;
                      pcVar10 = (char *)(param_1 + 0x25078);
                    }
                    goto LAB_011dc77c;
                  }
                  lVar11 = 7;
                  pcVar10 = (char *)(param_1 + 0x25048);
                }
                lVar11 = param_1 + 0x24f90 + lVar11 * 0x18;
                *pcVar10 = '\x02';
                *(undefined4 *)(lVar11 + 8) = *(undefined4 *)(param_2 + 8);
                *(undefined4 *)(lVar11 + 0xc) = *(undefined4 *)(param_2 + 0xc);
              }
            }
          }
        }
        else if (param_3 == 3) {
          local_98[0] = *(undefined4 *)(lVar2 + 0x2a8);
          local_a0 = *(undefined8 *)(lVar2 + 0x2a0);
          local_84 = *puVar1;
          FUN_011ea808(0x3fc00000,param_1,&local_84,&local_a0,&DAT_0408c4c1);
        }
LAB_011dc7f0:
        if (param_4 != (undefined2 *)0x0) {
          uVar6 = *(undefined2 *)puVar1;
          uVar4 = *(undefined1 *)(lVar2 + 0x27a);
          uVar5 = *(undefined1 *)(lVar2 + 0x27b);
          uVar3 = *(undefined4 *)(lVar2 + 0x27c);
          local_a0 = *puVar1;
          lVar11 = *(long *)PTR_DAT_04bbbc68;
          if ((((lVar11 != 0) && (*(long *)(lVar11 + 0xb0) != 0)) &&
              (*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0)) &&
             (((*(long *)(lVar11 + 0x488) != 0 && (*(long *)(*(long *)(lVar11 + 0x488) + 8) != 0))
              && ((*(long *)(lVar11 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) != 0)
                  ))))) {
            uVar8 = FUN_0277d6c4(&local_a0);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
              *param_4 = uVar6;
              *(undefined1 *)(param_4 + 1) = uVar4;
              *(undefined1 *)((long)param_4 + 3) = uVar5;
              *(undefined4 *)(param_4 + 2) = uVar3;
            }
          }
        }
        FUN_01256964(puVar1,*(undefined4 *)(param_1 + 0x230),1,1);
        uVar8 = FUN_011de210(param_1,iVar12,0);
        *(undefined2 *)(lVar2 + 0x2e0) = 0;
        local_a0 = 0xfffe;
        FUN_0277d4ac(&local_a0);
        *(undefined8 *)(lVar2 + 0x280) = 0;
        *(undefined8 *)(lVar2 + 0x290) = 0xffffffffffffffff;
        *(undefined8 *)(lVar2 + 0x2d0) = 0xffffffffffffffff;
        *(undefined8 *)(lVar2 + 0x298) = 0;
        *(undefined8 *)(lVar2 + 0x2a0) = 0;
        *(undefined4 *)(lVar2 + 0x2a8) = 0;
        *(undefined8 *)(lVar2 + 0x2b0) = 0;
        *(undefined4 *)(lVar2 + 0x2b8) = 0;
        *(undefined2 *)(lVar2 + 0x278) = (undefined2)local_a0;
        *(undefined8 *)(lVar2 + 0x2c0) = 0;
        *(undefined4 *)(lVar2 + 0x2c8) = 0;
        *(undefined2 *)(lVar2 + 0x27a) = local_a0._2_2_;
        *(undefined4 *)(lVar2 + 0x27c) = local_a0._4_4_;
        *(undefined1 *)(lVar2 + 0x2e6) = 0xff;
        *(undefined8 *)(lVar2 + 0x2d8) = 0x1e00000003;
        *(undefined2 *)(lVar2 + 0x2e7) = 0xffff;
        *(undefined4 *)(lVar2 + 0x2e2) = 0;
        iVar7 = *(int *)(param_1 + 0x24f78);
      }
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + 0x78;
    } while (iVar12 < iVar7);
  }
  return uVar8 & 1;
}

