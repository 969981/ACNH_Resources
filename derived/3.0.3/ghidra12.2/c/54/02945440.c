
/* WARNING: Removing unreachable block (ram,0x02945498) */

void FUN_02945440(long param_1,undefined4 *param_2)

{
  uint *puVar1;
  ulong uVar2;
  bool bVar3;
  float *pfVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  byte bVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 local_5c [3];
  
  fVar15 = (float)param_2[1];
  uVar13 = param_2[2];
  uVar14 = *param_2;
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar7 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar7 != 0)) {
    local_5c[0] = 0;
    lVar7 = *(long *)(lVar7 + 0x118);
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x280);
      fVar15 = 0.0;
      if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 8), lVar7 != 0)) {
        pfVar4 = (float *)(**(code **)(*(long *)(lVar7 + 0x488) + 0xf0))(lVar7 + 0x488);
        fVar15 = *pfVar4;
      }
      lVar7 = FUN_02945728(param_1);
      pfVar4 = (float *)(**(code **)(*(long *)(lVar7 + 0x460) + 0xf0))(lVar7 + 0x460);
      fVar15 = fVar15 - *pfVar4;
    }
  }
  pbVar8 = PTR_DAT_04bb32e0;
  if (DAT_04cd19d8 == 0) {
    plVar6 = *(long **)(param_1 + 0x68);
    fVar12 = *(float *)(param_1 + 0x3c8);
LAB_029455cc:
    if (*pbVar8 < 8) goto LAB_02945674;
LAB_029455d8:
    if (DAT_0537d558 == (long *)0x0) {
LAB_0294563c:
      pbVar8 = &DAT_0548e168;
      goto LAB_02945674;
    }
    lVar7 = *DAT_0537d558;
    bVar9 = *(byte *)(lVar7 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar7 + 0x471);
      }
    }
    bVar9 = *pbVar8;
    bVar3 = 7 < bVar9;
    if (bVar3) {
      bVar9 = 0xff;
    }
    local_5c[0] = CONCAT31(local_5c[0]._1_3_,bVar9);
    if (bVar3) goto LAB_0294563c;
  }
  else {
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      FUN_02507c6c(local_5c,7,1,1,0);
      fVar12 = 0.0;
      if ((byte)local_5c[0] < 8) {
        fVar11 = (float)FUN_0251dd30(local_5c);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        while (fVar12 = fVar11, (byte)local_5c[0] < 8) {
          uVar2 = (ulong)(byte)local_5c[0];
          do {
            uVar10 = uVar2;
            if (uVar10 == 7) goto LAB_029455a8;
            uVar5 = FUN_02507924(local_5c,&DAT_0548e169 + uVar10);
            uVar2 = uVar10 + 1;
          } while ((uVar5 & 1) == 0);
          if (7 < (byte)(&DAT_0548e169)[uVar10]) break;
          local_5c[0] = CONCAT31(local_5c[0]._1_3_,(&DAT_0548e169)[uVar10]);
          fVar11 = (float)FUN_0251dd30(local_5c);
          if (fVar11 <= fVar12) {
            fVar11 = fVar12;
          }
        }
      }
LAB_029455a8:
      plVar6 = *(long **)(param_1 + 0x68);
      fVar12 = fVar12 * *(float *)(param_1 + 0x3c8);
      lVar7 = *plVar6;
      goto LAB_0294569c;
    }
    plVar6 = *(long **)(param_1 + 0x68);
    fVar12 = *(float *)(param_1 + 0x3c8);
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_029455cc;
      }
      goto LAB_029455d8;
    }
LAB_02945674:
    bVar9 = *pbVar8;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    local_5c[0] = CONCAT31(local_5c[0]._1_3_,bVar9);
  }
  fVar11 = (float)FUN_0251dd30(local_5c);
  lVar7 = *plVar6;
  fVar12 = fVar12 * fVar11;
LAB_0294569c:
  (**(code **)(lVar7 + 0x178))(fVar12,plVar6);
  lVar7 = FUN_02945728(param_1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar7 + 0x660) + 0xf0))(lVar7 + 0x660);
  fVar12 = *pfVar4;
  *(undefined4 *)(param_1 + 0x2a8) = uVar14;
  *(undefined4 *)(param_1 + 0x2b0) = uVar13;
  *(float *)(param_1 + 0x2ac) = fVar15 - fVar12;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),param_1 + 0x2a8);
  return;
}

