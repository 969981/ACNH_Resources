
undefined8
FUN_0031f9b0(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
            long param_6)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  
  FUN_00348090(param_2,*(long *)(param_3 + 0x240) + 0x120);
  FUN_00348134(param_2,*(long *)(param_3 + 0x240) + 0x148);
  FUN_00347f8c(param_2,*(long *)(param_3 + 0x240) + 0x164);
  uVar7 = FUN_0031ef14(param_1,param_2,param_3,param_4,param_6);
  FUN_0031f190(uVar7,param_2,param_3,param_4);
  uVar8 = FUN_0033ee44(*param_1,param_2,param_3,*(undefined4 *)(param_6 + 0x14),param_5,param_6);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  local_80 = 0;
  uStack_78 = 0;
  lVar10 = *(long *)(param_3 + 0x780);
  uStack_68 = *(undefined8 *)(lVar10 + 0x1e0);
  local_70 = (**(long **)(param_3 + 0xc0) - *(long *)(lVar10 + 0x170)) + *(long *)(lVar10 + 0x1d8);
  FUN_0034836c(param_2,*(undefined4 *)(*(long *)(param_3 + 0x240) + 0x3f0),&local_70,0x10,
               (long)*(int *)(param_3 + 0x28) << 4);
  lVar10 = *(long *)(param_3 + 0x780);
  uStack_68 = *(undefined8 *)(lVar10 + 0x1e0);
  local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 8) - *(long *)(lVar10 + 0x170)) +
             *(long *)(lVar10 + 0x1d8);
  FUN_0034836c(param_2,*(undefined4 *)(*(long *)(param_3 + 0x240) + 0x3f4),&local_70,0x10,
               (long)*(int *)(param_3 + 0x28) << 4);
  lVar10 = *(long *)(param_3 + 0x240);
  if (*(int *)(lVar10 + 0x3f8) != -1) {
    lVar11 = *(long *)(param_3 + 0x780);
    uStack_68 = *(undefined8 *)(lVar11 + 0x1e0);
    local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x10) - *(long *)(lVar11 + 0x170)) +
               *(long *)(lVar11 + 0x1d8);
    FUN_0034836c(param_2,*(int *)(lVar10 + 0x3f8),&local_70,0x10,(long)*(int *)(param_3 + 0x28) << 4
                );
    lVar10 = *(long *)(param_3 + 0x240);
  }
  lVar11 = *(long *)(param_3 + 0x780);
  uStack_68 = *(undefined8 *)(lVar11 + 0x1e0);
  local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x20) - *(long *)(lVar11 + 0x170)) +
             *(long *)(lVar11 + 0x1d8);
  FUN_0034836c(param_2,*(undefined4 *)(lVar10 + 0x400),&local_70,0x10,
               (long)*(int *)(param_3 + 0x28) << 4);
  lVar10 = *(long *)(param_3 + 0x780);
  uStack_68 = *(undefined8 *)(lVar10 + 0x1e0);
  local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x18) - *(long *)(lVar10 + 0x170)) +
             *(long *)(lVar10 + 0x1d8);
  FUN_0034836c(param_2,*(undefined4 *)(*(long *)(param_3 + 0x240) + 0x3fc),&local_70,0x10,
               (long)*(int *)(param_3 + 0x28) << 4);
  lVar10 = *(long *)(param_3 + 0x240);
  if (*(int *)(lVar10 + 0x404) != -1) {
    lVar11 = *(long *)(param_3 + 0x780);
    uStack_68 = *(undefined8 *)(lVar11 + 0x1e0);
    local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x28) - *(long *)(lVar11 + 0x170)) +
               *(long *)(lVar11 + 0x1d8);
    FUN_0034836c(param_2,*(int *)(lVar10 + 0x404),&local_70,0x10,(long)*(int *)(param_3 + 0x28) << 4
                );
    lVar10 = *(long *)(param_3 + 0x240);
  }
  if (*(int *)(lVar10 + 0x408) != -1) {
    lVar11 = *(long *)(param_3 + 0x780);
    uStack_68 = *(undefined8 *)(lVar11 + 0x1e0);
    local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x30) - *(long *)(lVar11 + 0x170)) +
               *(long *)(lVar11 + 0x1d8);
    FUN_0034836c(param_2,*(int *)(lVar10 + 0x408),&local_70,0x10,(long)*(int *)(param_3 + 0x28) << 4
                );
    lVar10 = *(long *)(param_3 + 0x240);
  }
  if (*(int *)(lVar10 + 0x40c) != -1) {
    lVar11 = *(long *)(param_3 + 0x780);
    uStack_68 = *(undefined8 *)(lVar11 + 0x1e0);
    local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x38) - *(long *)(lVar11 + 0x170)) +
               *(long *)(lVar11 + 0x1d8);
    FUN_0034836c(param_2,*(int *)(lVar10 + 0x40c),&local_70,0x10,(long)*(int *)(param_3 + 0x28) << 4
                );
    lVar10 = *(long *)(param_3 + 0x240);
  }
  if (*(int *)(lVar10 + 0x410) != -1) {
    lVar11 = *(long *)(param_3 + 0x780);
    uStack_68 = *(undefined8 *)(lVar11 + 0x1e0);
    local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x40) - *(long *)(lVar11 + 0x170)) +
               *(long *)(lVar11 + 0x1d8);
    FUN_0034836c(param_2,*(int *)(lVar10 + 0x410),&local_70,0x10,(long)*(int *)(param_3 + 0x28) << 4
                );
    lVar10 = *(long *)(param_3 + 0x240);
  }
  if (*(int *)(lVar10 + 0x414) != -1) {
    lVar11 = *(long *)(param_3 + 0x780);
    uStack_68 = *(undefined8 *)(lVar11 + 0x1e0);
    local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x48) - *(long *)(lVar11 + 0x170)) +
               *(long *)(lVar11 + 0x1d8);
    FUN_0034836c(param_2,*(int *)(lVar10 + 0x414),&local_70,0x10,(long)*(int *)(param_3 + 0x28) << 4
                );
    lVar10 = *(long *)(param_3 + 0x240);
  }
  if (*(int *)(lVar10 + 0x418) != -1) {
    lVar11 = *(long *)(param_3 + 0x780);
    uStack_68 = *(undefined8 *)(lVar11 + 0x1e0);
    local_70 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x50) - *(long *)(lVar11 + 0x170)) +
               *(long *)(lVar11 + 0x1d8);
    FUN_0034836c(param_2,*(int *)(lVar10 + 0x418),&local_70,0x10,(long)*(int *)(param_3 + 0x28) << 4
                );
  }
  cVar2 = *(char *)(param_4 + 0x49);
  uVar1 = *(undefined4 *)(param_3 + 0x9a0);
  if (cVar2 != -1) {
    uVar8 = FUN_0031ed2c(param_3 + 0x880);
    if ((uVar8 & 1) == 0) {
      uVar7 = 0;
      goto LAB_0031ff98;
    }
    uVar7 = *(undefined8 *)(param_3 + 0x8c0);
    local_70 = 0;
    uStack_68 = 0;
    FUN_0031edb4(param_3 + 0x880,&local_70,uVar1);
    FUN_00348d48(param_2,(int)cVar2,0,&local_70,uVar7);
  }
  cVar2 = *(char *)(param_4 + 0x4a);
  if (cVar2 != -1) {
    uVar8 = FUN_0031ed2c(param_3 + 0x8c8);
    if ((uVar8 & 1) == 0) {
      uVar7 = 1;
      goto LAB_0031ff98;
    }
    uVar7 = *(undefined8 *)(param_3 + 0x908);
    local_70 = 0;
    uStack_68 = 0;
    FUN_0031edb4(param_3 + 0x8c8,&local_70,uVar1);
    FUN_00348d48(param_2,(int)cVar2,0,&local_70,uVar7);
  }
  cVar2 = *(char *)(param_4 + 0x4b);
  if (cVar2 != -1) {
    uVar8 = FUN_0031ed2c(param_3 + 0x910);
    if ((uVar8 & 1) == 0) {
      uVar7 = 2;
      goto LAB_0031ff98;
    }
    uVar7 = *(undefined8 *)(param_3 + 0x950);
    local_70 = 0;
    uStack_68 = 0;
    FUN_0031edb4(param_3 + 0x910,&local_70,uVar1);
    FUN_00348d48(param_2,(int)cVar2,0,&local_70,uVar7);
  }
  cVar2 = *(char *)(param_4 + 0x4c);
  if (cVar2 != -1) {
    uVar8 = FUN_0031ed2c(param_3 + 0x958);
    if ((uVar8 & 1) == 0) {
      uVar7 = 3;
LAB_0031ff98:
      FUN_0032c410("Custom attribute %d is not initialized !!!",uVar7);
      return 0;
    }
    uVar7 = *(undefined8 *)(param_3 + 0x998);
    local_70 = 0;
    uStack_68 = 0;
    FUN_0031edb4(param_3 + 0x958,&local_70,uVar1);
    FUN_00348d48(param_2,(int)cVar2,0,&local_70,uVar7);
  }
  plVar12 = *(long **)(*(long *)(param_3 + 0x240) + 0x78);
  if ((plVar12 != (long *)0x0) && (iVar5 = (**(code **)(*plVar12 + 0x30))(plVar12), 0 < iVar5)) {
    iVar5 = 0;
    do {
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_80,iVar5);
      uVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,iVar5);
      uVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,iVar5);
      FUN_0034836c(param_2,iVar5,&local_80,uVar7,uVar9);
      iVar5 = iVar5 + 1;
      iVar6 = (**(code **)(*plVar12 + 0x30))(plVar12);
    } while (iVar5 < iVar6);
  }
  FUN_0034820c(param_2,*(long *)(param_3 + 0x240) + (ulong)*(uint *)(param_6 + 0x14) * 0x20 + 0x390)
  ;
  if (*(char *)(*(long *)(param_3 + 0xa0) + 0x791) == '\0') {
    iVar5 = *(int *)(param_3 + 0x230);
    iVar6 = *(int *)(param_3 + 0x238);
    iVar4 = *(int *)(param_3 + 0x234) + iVar5 + -1;
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = iVar4 / iVar5;
    }
    iVar4 = iVar4 - iVar3 * iVar5;
    if (iVar4 < iVar6) {
      iVar5 = iVar5 - iVar6;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x60))(plVar12,param_2,iVar4 + 1,0,*(undefined1 *)(param_3 + 8));
        (**(code **)(*plVar12 + 0x60))(plVar12,param_2,iVar5,iVar6,*(undefined1 *)(param_3 + 8));
        return 1;
      }
      FUN_00347e0c(param_2,4,4,0,iVar4 + 1,0);
    }
    else {
      iVar5 = (iVar4 - iVar6) + 1;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x60))(plVar12,param_2,iVar5,iVar6,*(undefined1 *)(param_3 + 8));
        return 1;
      }
    }
    FUN_00347e0c(param_2,4,4,0,iVar5,iVar6);
  }
  else {
    FUN_003200c0(param_1,param_2,param_3);
  }
  return 1;
}

