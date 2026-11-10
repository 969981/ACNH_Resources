
undefined8 FUN_002950b4(long param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  char cVar15;
  ulong local_f0;
  undefined4 local_e8;
  long local_e0 [2];
  int local_d0 [4];
  undefined1 auStack_c0 [128];
  
  puVar5 = PTR_DAT_04bcd350;
  puVar4 = PTR_DAT_04bcb8b8;
  uVar2 = *(int *)(param_1 + 0x90) - 6;
  if (4 < uVar2) {
    return 0;
  }
  lVar14 = *(long *)PTR_DAT_04bcb8b8;
  uVar7 = FUN_0026be6c(*(undefined8 *)PTR_DAT_04bcd350);
  puVar3 = PTR_DAT_04bc1510;
  plVar8 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar9 = (**(code **)(*plVar8 + 0x50))(plVar8,uVar7);
  if (lVar9 == 0) {
    return 0;
  }
  FUN_002b3fa8(auStack_c0);
  plVar8 = (long *)FUN_002ba788(*(undefined8 *)puVar3);
  (**(code **)(*plVar8 + 0x20))(local_d0,plVar8,lVar9,auStack_c0);
  if (local_d0[0] == 0) {
    uVar10 = FUN_002b43ec(auStack_c0);
    uVar11 = FUN_0026c89c(*(undefined8 *)puVar5);
    FUN_002610a0(&local_f0,uVar11,local_e0,uVar10);
    FUN_00229780(local_d0,&local_f0);
    if (local_d0[0] == 0) {
      if (*(int *)(param_1 + 0x90) - 9U < 2) {
        *(undefined8 *)(lVar14 + 0x100) = 0;
        *(undefined4 *)(lVar14 + 0x1e0) = 0;
LAB_002951f0:
        lVar9 = (**(code **)(**(long **)(lVar14 + (ulong)*(byte *)(lVar14 + 0x162) * 8 + 0x168) +
                            0xf0))();
        uVar10 = FUN_0026c89c(*(undefined8 *)puVar5);
        FUN_002610a0(&local_f0,uVar10,local_e0,lVar9);
        FUN_00229780(local_d0,&local_f0);
        if ((local_d0[0] == 0) &&
           ((*(int *)(lVar14 + 0x1e0) !=
             *(int *)(lVar14 + (ulong)*(byte *)(lVar14 + 0x162) * 4 + 0x180) ||
            (lVar9 == *(long *)(lVar14 + 0x100))))) {
          for (lVar9 = *(long *)(lVar14 + 0x1a0); lVar9 != lVar14 + 0x198;
              lVar9 = *(long *)(lVar9 + 8)) {
            uVar12 = FUN_00291da0(*(undefined8 *)(lVar14 + 0xb8),*(undefined8 *)(lVar9 + 0x10));
            if (((uVar12 & 1) != 0) &&
               (uVar12 = FUN_00292080(*(undefined8 *)(lVar14 + 0xb8),*(undefined8 *)(lVar9 + 0x10)),
               (uVar12 & 1) != 0)) {
              uVar10 = FUN_0026c89c(*(undefined8 *)puVar5);
              lVar13 = FUN_00260e70(uVar10,*(undefined8 *)(lVar9 + 0x10));
              if (lVar13 == 0) goto LAB_002951a8;
              uVar10 = FUN_0026c89c(*(undefined8 *)puVar5);
              FUN_00260e40(uVar10,*(undefined8 *)(lVar9 + 0x10),1);
            }
          }
          FUN_0029ce48(lVar14,1);
          uVar7 = 4;
          if (2 < *(int *)(param_1 + 0x90) - 6U) {
            uVar7 = 2;
          }
          *(undefined4 *)(lVar14 + 0xd4) = uVar7;
          FUN_00292340(*(undefined8 *)(lVar14 + 0xb8));
          FUN_002920d0(*(undefined8 *)(lVar14 + 0xb8));
          uVar10 = FUN_0026c89c(*(undefined8 *)puVar5);
          local_e8 = 0;
          local_f0 = 0x8000000000000;
          FUN_00261158(uVar10,&local_f0);
          local_f0 = 0x8000000000000;
          local_e8 = 0;
          FUN_0029283c(*(undefined8 *)(lVar14 + 0xb8),&local_f0);
          if (local_e0[0] != *(long *)(lVar14 + 0xf8)) {
            *(long *)(lVar14 + 0xf8) = local_e0[0];
            FUN_0029c5b4(lVar14,2);
          }
          FUN_0029c5b4(lVar14,uVar2 * 2 + 0xc,0);
          lVar13 = *(long *)(param_1 + 0x120);
          lVar9 = *(long *)(*(long *)PTR_DAT_04bcb8c0 + 0x30);
          plVar8 = (long *)FUN_00228380();
          uVar7 = 0;
          if (*plVar8 != 0) {
            uVar7 = (undefined4)((lVar9 - lVar13) / *plVar8);
          }
          lVar9 = FUN_0026c89c(*(undefined8 *)puVar5);
          lVar13 = *(long *)(lVar9 + 8);
          if (lVar13 == lVar9) {
            cVar15 = '\0';
          }
          else {
            uVar10 = *(undefined8 *)(lVar14 + 0xb8);
            cVar15 = '\0';
            do {
              uVar12 = FUN_00292560(uVar10,*(undefined8 *)(lVar13 + 0x10),&local_f0);
              if ((uVar12 & 1) != 0) {
                cVar15 = cVar15 + ((int)local_f0 ==
                                  *(int *)(lVar14 + (ulong)*(byte *)(lVar14 + 0x162) * 4 + 0x180));
              }
              lVar13 = *(long *)(lVar13 + 8);
            } while (lVar13 != lVar9);
          }
          puVar4 = PTR_DAT_04bccf10;
          bVar6 = 2 < *(int *)(param_1 + 0x90) - 6U;
          lVar9 = 0x300;
          if (bVar6) {
            lVar9 = 0x308;
          }
          *(undefined4 *)(PTR_DAT_04bccf10 + lVar9) = uVar7;
          lVar9 = 0x2ff;
          if (bVar6) {
            lVar9 = 0x307;
          }
          uVar1 = *(undefined1 *)(param_1 + 0x130);
          lVar14 = 0x2fd;
          if (bVar6) {
            lVar14 = 0x305;
          }
          puVar4[lVar9] = cVar15;
          puVar4[lVar14] = uVar1;
          *(undefined4 *)(param_1 + 0x90) = 0;
          uVar10 = 1;
          goto LAB_002951ac;
        }
      }
      else {
        local_f0 = local_f0 & 0xffffffff00000000;
        lVar9 = *(long *)puVar4;
        *(long *)(lVar14 + 0x100) = local_e0[0];
        uVar12 = FUN_00292560(*(undefined8 *)(lVar9 + 0xb8),local_e0[0],&local_f0);
        if (((uVar12 & 1) != 0) && ((int)local_f0 != 0)) {
          *(int *)(lVar14 + 0x1e0) = (int)local_f0;
          lVar9 = (**(code **)(**(long **)(lVar14 + (ulong)(*(char *)(lVar14 + 0x162) == '\0') * 8 +
                                          0x168) + 0xf0))();
          if (lVar9 == *(long *)(lVar14 + 0x100)) goto LAB_002951f0;
        }
      }
    }
    else {
      uVar10 = FUN_0026c89c(*(undefined8 *)puVar5);
      local_e8 = 0;
      local_f0 = 0x8000000000000;
      FUN_00261158(uVar10,&local_f0);
    }
  }
LAB_002951a8:
  uVar10 = 0;
LAB_002951ac:
  FUN_002b4104(auStack_c0);
  return uVar10;
}

