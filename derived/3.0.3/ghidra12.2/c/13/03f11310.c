
long FUN_03f11310(long param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined *local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  
  plVar9 = *(long **)(param_1 + 0x278);
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x270) != 0) {
    plVar2 = plVar9 + *(int *)(param_1 + 0x270);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar8 = *plVar9;
      local_a8 = *(undefined ***)(*(long *)(lVar8 + 0x30) + 0x10);
      local_b0 = puVar1;
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar10 = param_2[1];
      (**(code **)(local_b0 + 0x18))(&local_b0);
      if ((undefined **)lVar10 == local_a8) {
        return lVar8;
      }
      uVar7 = 0;
      bVar6 = true;
      do {
        lVar10 = param_2[1] + 2 + uVar7;
        cVar4 = *(char *)(lVar10 + -2);
        if (cVar4 != *(char *)((long)local_a8 + uVar7)) break;
        if (cVar4 == '\0') {
          if (bVar6) {
            return lVar8;
          }
          break;
        }
        cVar4 = *(char *)(lVar10 + -1);
        if (cVar4 != *(char *)((long)local_a8 + uVar7 + 1)) break;
        if (cVar4 == '\0') {
          return lVar8;
        }
        cVar4 = *(char *)(param_2[1] + 2 + uVar7);
        if (cVar4 != *(char *)((long)local_a8 + uVar7 + 2)) break;
        if (cVar4 == '\0') {
          return lVar8;
        }
        bVar6 = uVar7 < 0x7fffe;
        uVar7 = uVar7 + 3;
      } while (uVar7 != 0x80001);
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  local_b0 = (undefined *)param_2[1];
  local_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a8 = &PTR_PTR_04c56b88;
  local_98 = 1;
  local_70 = 0;
  local_68 = param_3;
  lVar8 = FUN_03bdd5c8(DAT_05aec220,&local_b0,param_3,0);
  FUN_03bf3e20(lVar8,param_3);
  if ((*(byte *)(lVar8 + 0xd8) >> 1 & 1) != 0) {
    FUN_03bf2370(lVar8 + 0x80);
    *(byte *)(lVar8 + 0xd8) = *(byte *)(lVar8 + 0xd8) & 0xfd;
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    *(long *)(lVar8 + 0x110) = *(long *)(param_1 + 0x230);
    lVar10 = *(long *)(DAT_05aebb78 + 0xf0);
    if (lVar10 != 0) {
      iVar5 = *(int *)(lVar10 + 0xd0) + *(int *)(lVar10 + 0xcc) + -1;
      iVar3 = 0;
      if (*(int *)(lVar10 + 200) <= iVar5) {
        iVar3 = *(int *)(lVar10 + 200);
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + (long)(iVar5 - iVar3) * 8);
      if ((lVar10 != 0) && (0 < *(int *)(lVar10 + 8))) goto LAB_03f11540;
    }
    if ((*(long *)(DAT_05aebb78 + 0x128) == 0) ||
       (*(int *)(*(long *)(DAT_05aebb78 + 0x128) + 8) < 1)) {
      FUN_03be4980(*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x18));
    }
  }
LAB_03f11540:
  if (*(int *)(param_1 + 0x270) < *(int *)(param_1 + 0x274)) {
    *(long *)(*(long *)(param_1 + 0x278) + (long)*(int *)(param_1 + 0x270) * 8) = lVar8;
    *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + 1;
  }
  return lVar8;
}

