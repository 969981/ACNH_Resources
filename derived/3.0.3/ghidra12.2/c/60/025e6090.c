
void FUN_025e6090(long param_1,int *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  char cVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_02602950(param_1,0x11);
  puVar2 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "GetManpu";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_50,(long)*param_2);
  }
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_50 = (undefined *)CONCAT71(local_50._1_7_,*(byte *)(param_1 + 0x18));
    lVar5 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_50,1);
  }
  else {
    if ((*(int *)(param_1 + 0x1c) == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) goto LAB_025e62a0;
    lVar5 = FUN_026eec4c();
  }
  if (lVar5 == 0) goto LAB_025e62a0;
  lVar13 = lVar5 + 0x194b0;
  if (*(long *)(lVar5 + 0x194b8) == 0) {
    lVar13 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    plVar8 = *(long **)(lVar13 + 0x1170);
    if (plVar8 != (long *)0x0) goto LAB_025e616c;
LAB_025e6188:
    uVar4 = 1;
  }
  else {
    plVar8 = *(long **)(lVar5 + 0x1a620);
    if (plVar8 == (long *)0x0) goto LAB_025e6188;
LAB_025e616c:
    if ((undefined8 *)*plVar8 == (undefined8 *)0x0) goto LAB_025e6188;
    uVar4 = (*(code *)**(undefined8 **)*plVar8)();
    uVar4 = uVar4 ^ 1;
  }
  uVar9 = 0;
  iVar12 = 0;
  pbVar1 = (byte *)(*(long *)(lVar13 + 0x1158) + *(long *)(lVar13 + 0x1150));
  do {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar9);
    if (uVar9 == *pbVar1) {
      uVar10 = 1;
    }
    else {
      uVar3 = 0;
      do {
        uVar11 = uVar3;
        if (uVar9 == pbVar1[uVar11 + 1]) goto LAB_025e6250;
        if (uVar9 == pbVar1[uVar11 + 2]) {
          uVar11 = uVar11 + 1;
          goto LAB_025e6250;
        }
        if (uVar9 == pbVar1[uVar11 + 3]) {
          uVar11 = uVar11 + 2;
          goto LAB_025e6250;
        }
        if (uVar11 == 0xfc) {
          uVar11 = 0xff;
          goto LAB_025e6250;
        }
        uVar3 = uVar11 + 4;
      } while (uVar9 != pbVar1[uVar11 + 4]);
      uVar11 = uVar11 + 3;
LAB_025e6250:
      uVar10 = (uint)(uVar11 < 0xff);
    }
    uVar9 = uVar9 + 1;
    iVar12 = iVar12 + uVar10;
  } while (uVar9 != 0x79);
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar13 + 0x1170) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x1170) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  local_50 = puVar2 + 0x10;
  pcStack_48 = "ActiveManpuNum";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_50,iVar12);
  }
LAB_025e62a0:
  cVar7 = (char)param_2[1];
  local_50 = puVar2 + 0x10;
  pcStack_48 = "IsNNPC";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_50);
    cVar7 = (char)param_2[1];
  }
  local_50 = puVar2 + 0x10;
  if (cVar7 == '\0') {
    pcStack_48 = "SNPCUniqueID";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_50,(short)param_2[4]);
    }
  }
  else {
    pcStack_48 = "NNPCLooks";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_50,(long)param_2[3]);
    }
    FUN_02603510(param_1,param_2[2]);
    FUN_026035e0(param_1,param_2[2]);
  }
  return;
}

