
void FUN_026df200(uint *param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  long lVar11;
  byte local_34 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  if (lVar11 == 0) {
    pbVar9 = &DAT_0548e140;
LAB_026df278:
    if (7 < *pbVar9) {
LAB_026df284:
      if (DAT_0537d558 != (long *)0x0) {
        lVar11 = *DAT_0537d558;
        bVar5 = *(byte *)(lVar11 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar11 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar9 = (byte *)(lVar11 + 0x471);
          }
        }
        local_34[0] = *pbVar9;
        if (local_34[0] < 8) goto LAB_026df304;
      }
      pbVar9 = &DAT_0548e168;
    }
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar11 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar11 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_026df278;
      }
      goto LAB_026df284;
    }
  }
  local_34[0] = *pbVar9;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
LAB_026df304:
  lVar11 = FUN_0266c700(local_34);
  if (lVar11 != 0) {
    if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar7 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar7)();
      uVar6 = uVar6 ^ 1;
    }
    puVar1 = (uint *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
    uVar4 = *puVar1;
    if (8 < uVar4) {
      uVar4 = 0;
    }
    uVar8 = *param_1;
    if (8 < uVar8) {
      uVar8 = 0;
    }
    if (uVar4 != uVar8) {
      *(short *)(param_1 + 1) = (short)puVar1[1];
      *(undefined2 *)((long)param_1 + 6) =
           *(undefined2 *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + 6);
      *(undefined2 *)(param_1 + 2) =
           *(undefined2 *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + 8);
      lVar2 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
      uVar3 = *(uint *)(lVar2 + 0x28a00);
      param_1[3] = *(uint *)(lVar2 + 0x289fc);
      param_1[4] = uVar3;
      if (8 < uVar4) {
        uVar4 = 0;
      }
      *param_1 = uVar4;
      if (uVar8 != 0) {
        if (8 < uVar8) {
          uVar8 = 0;
        }
        if (uVar8 != uVar4) {
          uVar3 = uVar8;
          if ((int)uVar8 < (int)uVar4) {
            uVar3 = uVar4;
          }
          iVar10 = uVar3 - uVar8;
          do {
            if (iVar10 == 0) goto LAB_026df424;
            uVar4 = uVar8 - 3;
            uVar8 = uVar8 + 1;
            iVar10 = iVar10 + -1;
          } while (2 < uVar4);
          local_18 = 0xffffffff;
          uStack_14 = 0;
          FUN_01523b50(0x80e20d8,&local_18,&uStack_14,0,0,0,0);
        }
      }
    }
LAB_026df424:
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return;
}

