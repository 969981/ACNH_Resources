
bool FUN_023fba50(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                 undefined8 *param_5,byte param_6,uint param_7,undefined4 param_8)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  short sVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  ulong uVar12;
  undefined2 uVar13;
  long *plVar14;
  byte bVar15;
  int iVar16;
  uint *puVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined2 local_78;
  undefined1 local_76;
  char local_75;
  int local_74;
  
  iVar4 = *(int *)(param_4 + 0x178);
  if ((iVar4 != 0) || ((param_7 & 1) != 0)) goto LAB_023fbeb4;
  piVar2 = (int *)(param_4 + 0x1982);
  *(undefined8 *)(param_4 + 0x19a0) = 0;
  *(undefined8 *)(param_4 + 0x19a8) = 0;
  pbVar1 = (byte *)(param_4 + 0x1ee8);
  *(undefined8 *)(param_4 + 0x19b0) = 0;
  *(undefined8 *)(param_4 + 0x19b8) = 0;
  *(undefined8 *)(param_4 + 0x1960) = *(undefined8 *)(param_4 + 0x18e0);
  *(undefined8 *)(param_4 + 0x19c0) = 0;
  *(undefined8 *)(param_4 + 0x19c8) = 0;
  *(undefined8 *)(param_4 + 0x19d0) = 0;
  *(undefined2 *)(param_4 + 0x19d8) = 0;
  *(undefined8 *)(param_4 + 0x1980) = 0;
  *(undefined8 *)(param_4 + 0x1988) = 0;
  *(undefined8 *)(param_4 + 0x1990) = 0;
  *(undefined8 *)(param_4 + 0x1998) = 0;
  *(byte *)(param_4 + 0x19a6) = param_6 & 1;
  *(undefined8 *)(param_4 + 0x1968) = *(undefined8 *)(param_4 + 0x18e8);
  *(undefined8 *)(param_4 + 0x1970) = *(undefined8 *)(param_4 + 0x18f0);
  *(undefined8 *)(param_4 + 0x1978) = *(undefined8 *)(param_4 + 0x18f8);
  fVar19 = (float)FUN_0251c628(pbVar1);
  iVar16 = (int)(param_2 * 4.0);
  *piVar2 = (int)(fVar19 * 999.99994);
  if (0x7ffe < iVar16) {
    iVar16 = 0x7fff;
  }
  if (iVar16 < -0x7fff) {
    iVar16 = -0x8000;
  }
  *(short *)(param_4 + 0x1986) = (short)iVar16;
  *(int *)(param_4 + 0x1988) = (int)(param_3 * 999.99994);
  uVar13 = 0x8000;
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x57d4aeba) ||
     (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x1693a871)) {
LAB_023fbb6c:
    *(undefined2 *)(param_4 + 0x1980) = uVar13;
  }
  else {
    lVar9 = FUN_00a77090(pbVar1);
    puVar6 = PTR_DAT_04bb27c0;
    if ((lVar9 != 0) && (-1 < (int)*(uint *)PTR_DAT_04bb6260)) {
      uVar12 = 0;
      puVar17 = (uint *)PTR_DAT_04bb6258;
      do {
        puVar3 = puVar17;
        if (999 < uVar12) {
          puVar3 = (uint *)PTR_DAT_04bb6258;
        }
        if ((*puVar3 != 0) && (*(long *)(puVar3 + 2) == *(long *)(lVar9 + 0x10))) {
          if ((uint)uVar12 != 0xffffffff) {
            if (999 < (uint)uVar12) {
              puVar17 = (uint *)PTR_DAT_04bb6258;
            }
            uVar7 = *puVar17;
            goto LAB_023fbf68;
          }
          break;
        }
        uVar12 = uVar12 + 1;
        puVar17 = puVar17 + 4;
      } while ((ulong)*(uint *)PTR_DAT_04bb6260 + 1 != uVar12);
    }
    uVar7 = 0;
LAB_023fbf68:
    lVar9 = *(long *)PTR_DAT_04bb27c0;
    if (lVar9 != 0) {
      if ((((uVar7 == 0) ||
           (lVar18 = *(long *)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar7 >> 0x14) * 8)
           , lVar18 == 0)) || ((*(uint *)(lVar18 + 0x248) >> 1 & 1) != 0)) ||
         (*(uint *)(lVar18 + 0x230) != uVar7)) {
        lVar18 = 0;
      }
      if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
        plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar9 = *(long *)puVar6;
        iVar16 = (**(code **)(*plVar14 + 0x60))();
        if (iVar16 < 0x11) {
          uVar7 = 1;
        }
        else {
          if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_023fc004;
          uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_023fc004:
        uVar7 = 0;
      }
      if (lVar18 != 0) {
        uVar7 = uVar7 ^ 1;
        if (*(int *)(lVar18 + 0x150) != 1) {
          uVar7 = 1;
        }
        if (uVar7 == 0) {
          iVar16 = FUN_006f0400(*(float *)(*(long *)(lVar18 + 0x68) + 0x278) -
                                (float)*piVar2 * 0.001,
                                *(float *)(*(long *)(lVar18 + 0x68) + 0x280) -
                                (float)*(int *)(param_4 + 0x1988) * 0.001);
          uVar13 = (undefined2)
                   ((ulong)(long)((float)(iVar16 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0) >> 0x10
                   );
          goto LAB_023fbb6c;
        }
      }
    }
  }
  iVar16 = *piVar2;
  iVar21 = *(int *)(param_4 + 0x1988);
  *(undefined8 *)(param_4 + 0x198c) = *param_5;
  sVar5 = *(short *)(param_4 + 0x1986);
  fVar22 = (float)((ulong)*(ushort *)(param_4 + 0x1980) << 0x10) * 1.4629181e-09;
  fVar19 = sinf(fVar22);
  fVar22 = cosf(fVar22);
  bVar15 = *(byte *)(param_4 + 0x1ee8);
  fVar20 = fVar19 * 0.0;
  *(int *)(param_4 + 0x199c) =
       (int)(((float)iVar16 * 0.001 + fVar20 * 0.0 + fVar22 * 0.0 + (fVar19 + 0.0) * 10.0 + 0.0) *
            999.99994);
  *(int *)(param_4 + 0x19a2) =
       (int)(((float)iVar21 * 0.001 + (fVar22 * 0.0 * 0.0 - fVar19 * 0.0) + fVar22 * 10.0 + 0.0) *
            999.99994);
  iVar16 = (int)(((float)(int)sVar5 * 0.25 +
                 (fVar20 * 0.0 + 1.0) * 0.0 + fVar22 * 0.0 * 0.0 + fVar20 * 10.0 + 0.0 + 6.2) * 4.0)
  ;
  if (0x7ffe < iVar16) {
    iVar16 = 0x7fff;
  }
  if (iVar16 < -0x7fff) {
    iVar16 = -0x8000;
  }
  *(short *)(param_4 + 0x19a0) = (short)iVar16;
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  local_94 = CONCAT31(local_94._1_3_,bVar15);
  lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_94,1);
  if (lVar9 != 0) {
    if ((*(long **)(lVar9 + 0x1aa0) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x1aa0), puVar10 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar10)();
      uVar7 = uVar7 ^ 1;
    }
    puVar11 = (undefined2 *)FUN_02816430(*(long *)(lVar9 + 0x1a88) + *(long *)(lVar9 + 0x1a80));
    local_78 = *puVar11;
    local_74 = *(int *)(puVar11 + 2);
    local_76 = *(undefined1 *)(puVar11 + 1);
    local_75 = *(char *)((long)puVar11 + 3);
    plVar14 = *(long **)(lVar9 + 0x1aa0);
    if ((uVar7 & 1) == 0) {
      if (plVar14 != (long *)0x0) {
        if ((undefined8 *)plVar14[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar14[1])();
          plVar14 = *(long **)(lVar9 + 0x1aa0);
          goto LAB_023fbd3c;
        }
        goto LAB_023fbd40;
      }
LAB_023fbd5c:
      uVar7 = 1;
    }
    else {
LAB_023fbd3c:
      if (plVar14 == (long *)0x0) goto LAB_023fbd5c;
LAB_023fbd40:
      if ((undefined8 *)*plVar14 == (undefined8 *)0x0) goto LAB_023fbd5c;
      uVar7 = (*(code *)**(undefined8 **)*plVar14)();
      uVar7 = uVar7 ^ 1;
    }
    uVar8 = FUN_028169a0(*(long *)(lVar9 + 0x1a88) + *(long *)(lVar9 + 0x1a80));
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar9 + 0x1aa0) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1aa0) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
    if (uVar8 < 0x28) {
      lVar9 = FUN_02677ea0(pbVar1,uVar8);
      uVar12 = FUN_0277d7b4(&local_78,lVar9);
      if ((((uVar12 & 1) == 0) || (local_75 != *(char *)(lVar9 + 3))) ||
         (local_74 != *(int *)(lVar9 + 4))) {
        bVar15 = *pbVar1;
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        local_90 = *(undefined4 *)PTR_DAT_04bb37e0;
        uStack_8c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        local_94 = CONCAT31(local_94._1_3_,bVar15);
        local_88 = *(undefined4 *)PTR_DAT_04bb4e20;
        uStack_84 = 0;
        FUN_0254400c(&local_94);
      }
    }
  }
  *(undefined4 *)(param_4 + 0x19ac) = param_8;
  local_94 = 0xd1;
  *(undefined8 *)(param_4 + 0x18c0) = *(undefined8 *)(param_4 + 0x19c0);
  *(undefined8 *)(param_4 + 0x18c8) = *(undefined8 *)(param_4 + 0x19c8);
  *(undefined8 *)(param_4 + 0x18d0) = *(undefined8 *)(param_4 + 0x19d0);
  *(undefined2 *)(param_4 + 0x18d8) = *(undefined2 *)(param_4 + 0x19d8);
  *(undefined8 *)(param_4 + 0x18a0) = *(undefined8 *)(param_4 + 0x19a0);
  *(undefined8 *)(param_4 + 0x18a8) = *(undefined8 *)(param_4 + 0x19a8);
  *(undefined8 *)(param_4 + 0x18b0) = *(undefined8 *)(param_4 + 0x19b0);
  *(undefined8 *)(param_4 + 0x18b8) = *(undefined8 *)(param_4 + 0x19b8);
  *(undefined8 *)(param_4 + 0x1880) = *(undefined8 *)(param_4 + 0x1980);
  *(undefined8 *)(param_4 + 0x1888) = *(undefined8 *)(param_4 + 0x1988);
  *(undefined8 *)(param_4 + 0x1890) = *(undefined8 *)(param_4 + 0x1990);
  *(undefined8 *)(param_4 + 0x1898) = *(undefined8 *)(param_4 + 0x1998);
  *(undefined8 *)(param_4 + 0x1860) = *(undefined8 *)(param_4 + 0x1960);
  *(undefined8 *)(param_4 + 0x1868) = *(undefined8 *)(param_4 + 0x1968);
  *(undefined8 *)(param_4 + 0x1878) = *(undefined8 *)(param_4 + 0x1978);
  *(undefined8 *)(param_4 + 0x1870) = *(undefined8 *)(param_4 + 0x1970);
  lVar9 = 0;
  if (*(long *)(param_4 + 0x70) != 0) {
    lVar9 = *(long *)(param_4 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar9,0xd1);
LAB_023fbeb4:
  return iVar4 == 0;
}

