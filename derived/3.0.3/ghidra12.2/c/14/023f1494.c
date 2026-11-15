
void FUN_023f1494(long param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *__s;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  char cVar14;
  long lVar15;
  uint *puVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 local_b8;
  float local_b0;
  int local_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  undefined *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  uint uStack_78;
  uint local_74;
  
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar17 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar13 + 0x2ec) = uVar17;
  *(undefined1 *)((long)puVar13 + 0x2e5) = 1;
  fStack_a0 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  iVar10 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
  local_a4 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_9c = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  local_a8 = iVar10;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x55b5d9de) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_a4,1);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_a8);
    goto LAB_023f1978;
  }
  if (*(int *)(param_1 + 0x178) != 1) goto LAB_023f1978;
  local_b8 = CONCAT44(fStack_a0,local_a4);
  local_b0 = local_9c;
  fVar18 = (float)FUN_016e026c(0,&local_b8,0,0);
  FUN_016d73fc(&local_7c,&local_b8);
  puVar5 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_7c);
  lVar8 = *(long *)puVar5;
  if (lVar8 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_88 = 0;
      local_98 = PTR_DAT_04bc0510 + 0x10;
      local_90 = local_7c;
      local_8c = uStack_78;
      uVar6 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar5 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_7c);
          __s = PTR_DAT_04bbfe90;
          puVar5 = PTR_DAT_04bbfe88;
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
             (puVar16 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8),
             puVar16 != (uint *)0x0)) {
            uVar6 = *puVar16;
            local_74 = 0;
            if ((uVar6 != 0) && (puVar16 != (uint *)(ulong)uVar6)) {
              puVar11 = (uint *)((long)puVar16 - (long)(ulong)uVar6);
              local_74 = 0;
              if (*puVar11 != 0) {
                uVar6 = puVar11[1];
                if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                  lVar8 = 0xc;
                  if (*(char *)((long)puVar11 + 10) != '\0') {
                    lVar8 = 0x1c;
                  }
                  lVar8 = (long)puVar11 + lVar8 + (ulong)(ushort)puVar11[2] * 8;
                  if (lVar8 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar6 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar16 - lVar8) / (ulong)uVar6);
                    }
                    if (*puVar11 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
                       (local_74 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
                       local_74 < 0x52)) goto LAB_023f1740;
                  }
                }
                local_74 = 0;
              }
            }
LAB_023f1740:
            if ((local_74 & 0xfffffffe) == 10) {
              uVar6 = *puVar16;
              fVar19 = 0.0;
              if (uVar6 != 0) {
                cVar14 = *PTR_DAT_04bbfe88;
                do {
                  if (cVar14 == '\0') {
                    cVar14 = '\x01';
                    *puVar5 = 1;
                    memset(__s,0xff,0x1ac);
                    uVar6 = *puVar16;
                  }
                  else {
                    uVar3 = *(uint *)(__s + 0xf0);
                    if (-1 < (int)uVar3) {
                      if ((float *)((ulong)uVar3 + (long)puVar16) != (float *)0x0) {
                        fVar19 = *(float *)((ulong)uVar3 + (long)puVar16);
                      }
                      break;
                    }
                    if (uVar3 != 0xffffffff) break;
                  }
                  puVar11 = (uint *)(ulong)uVar6;
                  if ((puVar11 == (uint *)0x0) || (puVar16 == puVar11)) break;
                  lVar8 = 0xc;
                  if (*(char *)((long)puVar16 + (10 - (long)puVar11)) != '\0') {
                    lVar8 = 0x1c;
                  }
                  lVar8 = (long)puVar16 + (lVar8 - (long)puVar11);
                  if (lVar8 == 0) break;
                  uVar7 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar11));
                  *(undefined4 *)(__s + 0xf0) = 0xfffffffe;
                  if (uVar7 == 0) break;
                  piVar12 = (int *)(lVar8 + 4);
                  while (piVar12[-1] != -0x499d99d4) {
                    piVar12 = piVar12 + 2;
                    uVar7 = uVar7 - 1;
                    if (uVar7 == 0) goto LAB_023f1850;
                  }
                  iVar9 = 0;
                  if (*piVar12 != -1) {
                    iVar9 = *piVar12;
                  }
                  *(int *)(__s + 0xf0) = iVar9;
                  uVar6 = *puVar16;
                  if (uVar6 == 0) break;
                } while( true );
              }
LAB_023f1850:
              fVar18 = fVar18 + fVar19;
            }
            goto LAB_023f1854;
          }
        }
      }
      local_74 = 0;
    }
  }
LAB_023f1854:
  local_b8 = CONCAT44(fVar18,(undefined4)local_b8);
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar13 + 0x4f,&local_b8);
  if (*(int *)(param_1 + 0x178) == 0) {
    local_7c = 10;
    local_98 = (undefined *)CONCAT44(local_98._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_023f1978;
  }
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar8 = (**(code **)(*plVar2 + 0x148))();
  iVar9 = iVar10 - *(int *)(lVar8 + 4);
  if (0xb60b5e < iVar9 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar10 = -0x15555560;
    iVar9 = (int)((float)iVar9 * 0.2);
    if (iVar9 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar10 = 0x5b05b0;
    }
    iVar1 = iVar9;
    if (iVar4 <= iVar9) {
      iVar1 = iVar4;
    }
    if (iVar10 <= iVar9) {
      iVar10 = iVar1;
    }
    iVar10 = iVar10 + *(int *)(lVar8 + 4);
  }
  *(int *)(lVar8 + 4) = iVar10;
LAB_023f1978:
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  if (puVar13[0x227] == 0) {
    uVar6 = 0;
  }
  else {
    local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
    uVar6 = *(uint *)(puVar13 + 0x2d3) >> 1 & 1;
  }
  uVar7 = FUN_0170a6d0(puVar13,uVar6);
  if (((uVar7 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    uVar7 = FUN_016d77dc(*(long *)(param_1 + 0x68) + 0x278);
    if ((uVar7 & 1) == 0) {
      FUN_016f8b70(param_1);
      local_90 = 0;
      local_8c = local_8c & 0xffffff00;
      local_98 = (undefined *)0x1010000000006;
      FUN_02374564(param_1,&local_98);
    }
    else {
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      lVar8 = *(long *)(param_1 + 0x68);
      *(int *)(param_1 + 0x1982) = (int)(*(float *)(lVar8 + 0x278) * 999.99994);
      iVar10 = (int)(*(float *)(lVar8 + 0x27c) * 4.0);
      if (0x7ffe < iVar10) {
        iVar10 = 0x7fff;
      }
      if (iVar10 < -0x7fff) {
        iVar10 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar10;
      *(int *)(param_1 + 0x1988) = (int)(*(float *)(lVar8 + 0x280) * 999.99994);
      *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(lVar8 + 0x2b6);
      local_98 = (undefined *)CONCAT44(local_98._4_4_,0x6f);
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      lVar8 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar8 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar8,0x6f);
    }
  }
  return;
}

