
uint FUN_011e4960(float param_1,float param_2,long param_3,long param_4,ulong param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint in_w9;
  ulong uVar11;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  undefined4 *puVar12;
  long lVar13;
  int local_a0;
  undefined4 uStack_9c;
  char local_98;
  char local_97;
  undefined4 local_90;
  undefined4 local_8c;
  uint uStack_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  
  puVar5 = PTR_DAT_04bbbc68;
  piVar1 = (int *)(param_3 + 0x24f78);
  if (0 < *piVar1) {
    uVar11 = (ulong)*(uint *)(param_4 + 0xc);
    puVar12 = (undefined4 *)(param_3 + 0x278);
    uVar10 = *(uint *)(param_4 + 8) & 0xfffffffe;
    uVar2 = *(uint *)(param_4 + 0xc) & 0xfffffffe;
    if ((param_1 < 1.5) || ((param_5 & 1) == 0)) {
      iVar8 = 0;
      do {
        if ((((*(ushort *)(puVar12 + 0x1a) >> 3 & 1) != 0) && (puVar12[6] == uVar10)) &&
           (puVar12[7] == uVar2)) {
          local_8c = *puVar12;
          uStack_88 = puVar12[1];
          uVar11 = (ulong)uStack_88;
          lVar13 = *(long *)puVar5;
          if ((((lVar13 != 0) && (*(long *)(lVar13 + 0xb0) != 0)) &&
              ((*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0 &&
               ((*(long *)(lVar13 + 0x488) != 0 && (*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0)))
               ))) && ((*(long *)(lVar13 + 0x2b0) != 0 &&
                       (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0)))) {
            uVar7 = FUN_0277d6c4(&local_8c);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            uVar11 = (ulong)*(uint *)(lVar13 + 0x1d8);
            if (((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
                (uVar11 = *(ulong *)(lVar13 + 0x1e0), *(long *)(uVar11 + (long)(int)uVar7 * 8) != 0)
                ) && (local_a0 = FUN_0277ebd0(&local_8c), uVar11 = extraout_x9_00, local_a0 == 0)) {
              uVar9 = FUN_0123d710(&local_8c,7,1);
              uVar11 = extraout_x9_01;
              if ((((uVar9 & 1) != 0) && (param_2 - (float)puVar12[0xb] < 0.01)) &&
                 (-0.01 < param_2 - (float)puVar12[0xb])) goto LAB_011e4c88;
            }
          }
        }
        in_w9 = (uint)uVar11;
        iVar8 = iVar8 + 1;
        puVar12 = puVar12 + 0x1e;
      } while (iVar8 < *piVar1);
    }
    else {
      iVar8 = 0;
      do {
        if ((((*(ushort *)(puVar12 + 0x1a) >> 3 & 1) != 0) && (puVar12[6] == uVar10)) &&
           (puVar12[7] == uVar2)) {
          local_8c = *puVar12;
          uStack_88 = puVar12[1];
          uVar11 = (ulong)uStack_88;
          lVar13 = *(long *)puVar5;
          if (((((lVar13 != 0) && (*(long *)(lVar13 + 0xb0) != 0)) &&
               (*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0)) &&
              ((*(long *)(lVar13 + 0x488) != 0 && (*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0))))
             && ((*(long *)(lVar13 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0))
                )) {
            uVar7 = FUN_0277d6c4(&local_8c);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            uVar11 = (ulong)*(uint *)(lVar13 + 0x1d8);
            if (((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
                (uVar11 = *(ulong *)(lVar13 + 0x1e0), *(long *)(uVar11 + (long)(int)uVar7 * 8) != 0)
                ) && (local_a0 = FUN_0277ebd0(&local_8c), uVar11 = extraout_x9, local_a0 == 0)) {
              uVar7 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
              DAT_0514cb58 = DAT_0514cb5c;
              DAT_0514cb5c = DAT_0514cb60;
              uVar7 = uVar7 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar7 ^ DAT_0514cb64;
              DAT_0514cb60 = DAT_0514cb64;
              DAT_0514cb64 = uVar7;
              if ((uint)((ulong)uVar7 * 100 >> 0x20) < 10) {
                puVar3 = (undefined4 *)(param_3 + 0x1db44) + (ulong)*(uint *)(param_3 + 0x24f80) * 2
                ;
                if (0x1b < *(uint *)(param_3 + 0x24f80)) {
                  puVar3 = (undefined4 *)(param_3 + 0x1db44);
                }
                *puVar3 = local_8c;
                puVar3[1] = uStack_88;
                lVar13 = param_3 + 0x1dc28 + (ulong)*(uint *)(param_3 + 0x24f80) * 0x10;
                if (0x1b < *(uint *)(param_3 + 0x24f80)) {
                  lVar13 = param_3 + 0x1dc28;
                }
                *(uint *)(lVar13 + 8) = uVar10;
                *(uint *)(lVar13 + 0xc) = uVar2;
                *(int *)(param_3 + 0x24f80) = *(int *)(param_3 + 0x24f80) + 1;
              }
              uVar9 = FUN_0123d710(&local_8c,7,1);
              uVar11 = 0xbc23d70a;
              if ((((uVar9 & 1) != 0) && (param_2 - (float)puVar12[0xb] < 0.01)) &&
                 (-0.01 < param_2 - (float)puVar12[0xb])) goto LAB_011e4c88;
            }
          }
        }
        in_w9 = (uint)uVar11;
        iVar8 = iVar8 + 1;
        puVar12 = puVar12 + 0x1e;
      } while (iVar8 < *piVar1);
    }
  }
  uVar10 = 0;
LAB_011e4d64:
  return uVar10 & in_w9;
LAB_011e4c88:
  local_90 = puVar12[2];
  local_7c = CONCAT44(local_7c._4_4_,*(undefined4 *)(param_3 + 0x230));
  FUN_0071c8d0(&local_a0,&local_90,&local_7c,0);
  plVar4 = (long *)CONCAT44(uStack_9c,local_a0);
  if (plVar4 != (long *)0x0) {
    if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb50);
    }
    uVar11 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbbb48);
    if ((uVar11 & 1) == 0) {
      local_97 = '\0';
    }
  }
  bVar6 = local_97 == '\0';
  lVar13 = CONCAT44(uStack_9c,local_a0);
  if ((!bVar6 && lVar13 != 0) && local_98 != '\0') {
    FUN_011c8e30(lVar13,puVar12[0x16]);
    local_74 = puVar12[0xc];
    local_7c = *(undefined8 *)(puVar12 + 10);
    local_84 = *(undefined2 *)puVar12;
    local_82 = *(undefined1 *)((long)puVar12 + 2);
    local_81 = *(undefined1 *)((long)puVar12 + 3);
    local_80 = puVar12[1];
    FUN_011ea808(param_1,param_3,&local_84,&local_7c,&DAT_040b0555);
  }
  in_w9 = ((bVar6 || lVar13 == 0) || local_98 == '\0') ^ 1;
  uVar10 = 1;
  goto LAB_011e4d64;
}

