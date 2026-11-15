
void FUN_01df709c(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  byte bVar9;
  undefined8 uVar10;
  byte local_44 [4];
  undefined *local_40;
  char *pcStack_38;
  
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 0:
    if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
       (lVar7 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))()
       , lVar7 != 0)) {
      if ((*(long **)(lVar7 + 0x276f40) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x276f40), puVar4 == (undefined8 *)0x0)) {
        lVar6 = *(long *)(*(long *)(lVar7 + 0x276f28) + *(long *)(lVar7 + 0x276f20));
      }
      else {
        uVar5 = (**(code **)*puVar4)();
        lVar6 = *(long *)(*(long *)(lVar7 + 0x276f28) + *(long *)(lVar7 + 0x276f20));
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x276f40) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x276f40) + 8), puVar4 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar4)();
        }
      }
      if (lVar6 != 0) {
        *(undefined4 *)(param_1 + 0x48) = 1;
        goto switchD_01df70d4_caseD_1;
      }
    }
    if (*(long *)(*(long *)PTR_DAT_04bb27d0 + 8) != 0) {
      uVar5 = FUN_01d9b11c(*(long *)(*(long *)PTR_DAT_04bb27d0 + 8),param_1 + 0x78,param_1 + 0x50,0)
      ;
joined_r0x01df72c4:
      if ((uVar5 & 1) != 0) {
        return;
      }
    }
    break;
  case 1:
switchD_01df70d4_caseD_1:
    bVar9 = *(byte *)(param_1 + 0x78);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    local_40 = (undefined *)CONCAT71(local_40._1_7_,bVar9);
    lVar7 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_40,1);
    if (lVar7 != 0) {
      lVar6 = lVar7 + 0x194b0;
      if (*(long *)(lVar7 + 0x194b8) == 0) {
        lVar6 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(lVar6 + 0x24838) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x24838), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      lVar7 = *(long *)(*(long *)(lVar6 + 0x24820) + *(long *)(lVar6 + 0x24818));
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x24838) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x24838) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      if (lVar7 != 0) {
        *(undefined4 *)(param_1 + 0x48) = 2;
        goto switchD_01df70d4_caseD_2;
      }
    }
    if (*(long *)(*(long *)PTR_DAT_04bb27d0 + 8) != 0) {
      uVar5 = FUN_01d9a9b0(*(long *)(*(long *)PTR_DAT_04bb27d0 + 8),(byte *)(param_1 + 0x78),
                           param_1 + 0x50,0);
      goto joined_r0x01df72c4;
    }
    break;
  case 2:
switchD_01df70d4_caseD_2:
    pbVar1 = (byte *)(param_1 + 0x78);
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "NetIsRegistHomeLand";
    iVar3 = FUN_0274bce0(pbVar1,&local_40);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x48) = 3;
      goto switchD_01df70d4_caseD_3;
    }
    local_44[0] = *pbVar1;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    FUN_02669430(local_44);
    if (*(long *)(*(long *)PTR_DAT_04bb27d0 + 8) != 0) {
      uVar5 = FUN_01d9c25c(*(long *)(*(long *)PTR_DAT_04bb27d0 + 8),pbVar1,param_1 + 0x50,0);
      goto joined_r0x01df72c4;
    }
    break;
  case 3:
switchD_01df70d4_caseD_3:
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "NeedUpdatePassword";
    uVar5 = FUN_0273f0a0(&local_40);
    if ((uVar5 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x48) = 4;
      goto switchD_01df70d4_caseD_4;
    }
    if (*(long *)(*(long *)PTR_DAT_04bb27d0 + 8) != 0) {
      uVar5 = FUN_01d9b7c4(*(long *)(*(long *)PTR_DAT_04bb27d0 + 8),param_1 + 0x78,param_1 + 0x50,0)
      ;
      goto joined_r0x01df72c4;
    }
    break;
  case 4:
switchD_01df70d4_caseD_4:
    lVar7 = *(long *)PTR_DAT_04bb27d0;
    if (((lVar7 != 0) && (*(long *)(lVar7 + 0x28) != 0)) && (*(int *)(lVar7 + 0x80) == 1))
    goto switchD_01df70d4_default;
    if ((*(long *)(lVar7 + 0x18) != 0) &&
       (uVar5 = FUN_01db646c(*(long *)(lVar7 + 0x18) + 0x98,param_1 + 0x78,param_1 + 0x50,0),
       (uVar5 & 1) != 0)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 1;
    puVar8 = (undefined4 *)(param_1 + 100);
    goto LAB_01df73f0;
  default:
switchD_01df70d4_default:
    *(undefined4 *)(param_1 + 0x48) = 5;
    lVar7 = *(long *)(param_1 + 0x70);
    if (lVar7 == 0) {
      return;
    }
    *(undefined4 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 8) = 1;
    goto LAB_01df73ec;
  }
  *(undefined4 *)(param_1 + 0x48) = 5;
  *(undefined8 *)(param_1 + 0x58) = 0x16ffffffff;
  *(undefined8 *)(param_1 + 0x60) = 0;
  lVar7 = *(long *)(param_1 + 0x70);
  if (lVar7 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x5c);
    *(undefined4 *)(lVar7 + 8) = 0xffffffff;
    *(int *)(lVar7 + 0xc) = (int)uVar10;
    *(int *)(lVar7 + 0x10) = (int)((ulong)uVar10 >> 0x20);
LAB_01df73ec:
    puVar8 = (undefined4 *)(lVar7 + 0x14);
LAB_01df73f0:
    *puVar8 = 0;
  }
  return;
}

