
void FUN_021085d8(int *param_1,char *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  int *piVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  undefined4 local_38;
  char local_34;
  int local_30;
  undefined2 local_2c [2];
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  puVar4 = PTR_DAT_04bb27d0;
  lVar8 = **(long **)PTR_DAT_04bb27d0;
  bVar9 = *(byte *)(lVar8 + 0x473);
  if ((long)(char)bVar9 == 0xffffffffffffffff) {
LAB_02108628:
    uVar7 = (ulong)(char)param_1[1];
  }
  else {
    puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
    if (7 < bVar9) {
      puVar1 = (uint *)(lVar8 + 0x48);
    }
    if (((byte)*puVar1 >> 3 & 1) == 0) goto LAB_02108628;
    if (bVar9 != *(byte *)(lVar8 + 0x472)) {
      iVar6 = *param_1;
      if (iVar6 == 1) {
        local_30 = 0;
        if (DAT_04cd19d8 == 0) {
          bVar9 = DAT_0548e140;
LAB_02108754:
          if (bVar9 < 8) goto LAB_02108790;
LAB_0210875c:
          pbVar2 = PTR_DAT_04bb5038;
          if ((*puVar1 & 8) != 0) {
            pbVar2 = (byte *)(lVar8 + 0x471);
          }
          bVar9 = *pbVar2;
          bVar5 = 7 < bVar9;
          if (bVar5) {
            bVar9 = 0xff;
          }
          local_28 = CONCAT31(local_28._1_3_,bVar9);
          if (bVar5) {
            bVar9 = *PTR_DAT_04bb5038;
            goto LAB_02108790;
          }
        }
        else {
          pbVar2 = PTR_DAT_04bb32e0;
          if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
            pbVar2 = (byte *)(DAT_04cd19d8 + 0x158);
          }
          bVar9 = *pbVar2;
          if (7 < bVar9) {
            if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
              bVar9 = *(byte *)(DAT_054f5738 + 0x11a5);
              goto LAB_02108754;
            }
            goto LAB_0210875c;
          }
LAB_02108790:
          if (7 < bVar9) {
            bVar9 = 0xff;
          }
          local_28 = CONCAT31(local_28._1_3_,bVar9);
        }
        uVar7 = FUN_0252f708(&local_28,1,local_2c);
        if ((((uVar7 & 1) == 0) || (uVar7 = FUN_02b68e80(&local_30,local_2c[0]), (uVar7 & 1) == 0))
           || (local_34 = (char)param_1[1], local_30 != local_34)) {
          uVar7 = FUN_02917058((long)(char)param_1[1]);
          if ((uVar7 & 1) != 0) {
            local_34 = (char)param_1[1];
            goto LAB_021087ec;
          }
          local_34 = (char)param_1[1];
          local_28 = 0;
          local_38 = 2;
          local_22 = 0;
          local_24 = 0xff01;
          if (-1 < DAT_053d0fb0) {
            FUN_01db1df0(**(long **)puVar4 + 0x480,DAT_053d0fb0,&local_28,&local_38,8,0);
          }
          iVar6 = 2;
        }
        else {
LAB_021087ec:
          local_38 = 3;
          local_28 = 0;
          local_22 = 0;
          local_24 = 0xff01;
          if (-1 < DAT_053d0fb0) {
            FUN_01db1df0(**(long **)puVar4 + 0x480,DAT_053d0fb0,&local_28,&local_38,8,0);
          }
          iVar6 = 3;
        }
        lVar8 = **(long **)puVar4;
        bVar9 = *(byte *)(lVar8 + 0x473);
        lVar10 = *(long *)PTR_DAT_04bb3968;
        if (bVar9 != 0xff) goto LAB_021088ac;
        uVar7 = (ulong)(char)param_1[1];
        bVar12 = DAT_0537bdbc;
      }
      else {
        lVar10 = DAT_053e0208;
LAB_021088ac:
        puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
        if (7 < bVar9) {
          puVar1 = (uint *)(lVar8 + 0x48);
        }
        pbVar2 = &DAT_0537bdbc;
        if ((*puVar1 & 8) != 0) {
          pbVar2 = (byte *)(lVar8 + 0x473);
        }
        bVar12 = *pbVar2;
        uVar11 = (ulong)(char)param_1[1];
        uVar7 = uVar11;
        if (((*puVar1 >> 3 & 1) != 0) && (bVar9 != *(byte *)(lVar8 + 0x472))) goto LAB_02108928;
      }
      piVar3 = (int *)(lVar10 + 0xfac) + (uVar7 & 0xffffffff);
      if (9 < (uint)uVar7) {
        piVar3 = (int *)(lVar10 + 0xfac);
      }
      if (*piVar3 == 0) {
        return;
      }
      uVar11 = uVar7 & 0xffffffff;
LAB_02108928:
      lVar8 = lVar10 + 0xfa8 + (ulong)(uint)(int)(char)bVar12 * 0x2c;
      if (0xb < bVar12) {
        lVar8 = lVar10 + 0xfa8;
      }
      piVar3 = (int *)(lVar8 + 4) + uVar11;
      if (9 < (uint)uVar7) {
        piVar3 = (int *)(lVar8 + 4);
      }
      *piVar3 = iVar6;
      return;
    }
    uVar7 = (ulong)(char)param_1[1];
    if (bVar9 != *(byte *)(lVar8 + 0x472)) {
      uVar11 = uVar7;
      goto LAB_02108658;
    }
  }
  piVar3 = (int *)(DAT_053e0208 + 0xfac) + (uVar7 & 0xffffffff);
  if (9 < (uint)uVar7) {
    piVar3 = (int *)(DAT_053e0208 + 0xfac);
  }
  if (*piVar3 == 0) {
    return;
  }
  uVar11 = uVar7 & 0xffffffff;
LAB_02108658:
  lVar8 = DAT_053e0208 + 0xfa8 + (ulong)(uint)(int)*param_2 * 0x2c;
  if (0xb < (uint)(int)*param_2) {
    lVar8 = DAT_053e0208 + 0xfa8;
  }
  piVar3 = (int *)(lVar8 + 4) + uVar11;
  if (9 < (uint)uVar7) {
    piVar3 = (int *)(lVar8 + 4);
  }
  *piVar3 = *param_1;
  return;
}

