
bool FUN_037294f0(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *__src;
  long *plVar8;
  undefined *local_50;
  undefined1 *puStack_48;
  int local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar4 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  if ((*(int *)(puVar7 + 7) == -0x3e092032 || *(int *)(puVar7 + 7) == -0x7975b8e8) &&
     (-1 < *(char *)(param_1 + 0x1231))) {
    local_35 = 0;
    local_3c[0] = 0;
    local_40 = 8;
    local_50 = PTR_DAT_04bb3768 + 0x10;
    uVar2 = *(uint *)(param_1 + 0x123c8);
    puStack_48 = local_3c;
    if (uVar2 != 0xffffffff) {
      if (uVar2 < *(uint *)(param_1 + 0xe0)) {
        lVar5 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar2 * 8);
      }
      else {
        lVar5 = 0;
      }
      plVar8 = (long *)(lVar5 + 0x10);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      __src = *(undefined1 **)(lVar5 + 0x18);
      if (local_3c != __src) {
        (**(code **)(*(long *)(lVar5 + 0x10) + 0x18))(plVar8);
        lVar6 = 0;
        do {
          if (*(char *)(*(long *)(lVar5 + 0x18) + lVar6) == '\0') goto LAB_0372967c;
          lVar1 = *(long *)(lVar5 + 0x18) + lVar6;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_0372967c;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_0372967c;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_0372967c:
        iVar4 = (int)lVar6;
        if (local_40 <= (int)lVar6) {
          iVar4 = local_40 + -1;
        }
        memcpy(local_3c,__src,(long)iVar4);
        local_3c[iVar4] = 0;
      }
    }
    iVar4 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_50,PTR_DAT_04bb3238,1);
    bVar3 = iVar4 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

