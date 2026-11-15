
void FUN_021250f0(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *__src;
  long *plVar7;
  undefined **local_88;
  undefined1 *puStack_80;
  int local_78;
  undefined1 local_74 [15];
  undefined1 local_65;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x1604) == 1) {
    if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar5,0);
      if ((iVar3 == 0x758f7eaf) && ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0))))
      {
        uVar2 = *(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        lVar6 = param_2 + 8;
        if (uVar2 < 8) {
          lVar6 = lVar6 + (ulong)uVar2 * 0x1c;
        }
        goto LAB_021251ac;
      }
    }
    lVar6 = param_2 + 8;
  }
  else {
    lVar6 = param_2 + 0xcc;
  }
LAB_021251ac:
  local_65 = 0;
  local_74[0] = 0;
  local_78 = 0x10;
  local_44 = 0;
  local_48 = 0;
  local_88 = &PTR_LAB_048fb098;
  local_58 = *(undefined8 *)(lVar6 + 4);
  local_50 = *(undefined8 *)(lVar6 + 0xc);
  _local_60 = CONCAT44(*(undefined4 *)(param_2 + 0x130),*(undefined4 *)(param_2 + 0xf0));
  plVar7 = (long *)(param_2 + 0xf8);
  puStack_80 = local_74;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  __src = *(undefined1 **)(param_2 + 0x100);
  if (local_74 != __src) {
    (**(code **)(*(long *)(param_2 + 0xf8) + 0x18))(plVar7);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x100) + lVar6) == '\0') goto LAB_02125290;
      lVar1 = *(long *)(param_2 + 0x100) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02125290;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02125290;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02125290:
    iVar3 = (int)lVar6;
    if (local_78 <= (int)lVar6) {
      iVar3 = local_78 + -1;
    }
    memcpy(local_74,__src,(long)iVar3);
    local_74[iVar3] = 0;
  }
  uVar4 = FUN_0211dd00(param_1,&local_88,param_3);
  *(undefined4 *)(param_2 + 0xe8) = uVar4;
  return;
}

