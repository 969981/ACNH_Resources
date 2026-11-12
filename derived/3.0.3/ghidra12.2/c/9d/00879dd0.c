
uint FUN_00879dd0(long param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *__s;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  int *piVar11;
  char *pcVar12;
  ulong uVar13;
  char cVar14;
  undefined4 local_88 [2];
  char *local_80;
  undefined *local_78;
  char *local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined2 local_64;
  undefined1 local_62;
  
  local_68 = (undefined2)param_3;
  local_64 = 5;
  local_66 = (undefined1)param_4;
  local_65 = (undefined1)param_5;
  local_62 = 0;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar7 = FUN_006bd550(param_2[1],0);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar7);
  puVar9 = (uint *)FUN_0088c0d0(param_1 + 8,&local_78);
  __s = PTR_DAT_04bb3250;
  puVar5 = PTR_DAT_04bb3248;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  if (puVar9 == (uint *)0x0) {
    FUN_0087a0f0(local_88,param_1,param_2,&local_68);
  }
  else {
    uVar8 = *puVar9;
    if (uVar8 != 0) {
      cVar14 = *PTR_DAT_04bb3248;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *puVar5 = 1;
          memset(__s,0xff,0x288);
          uVar8 = *puVar9;
        }
        else {
          uVar3 = *(uint *)(__s + 0x148);
          if (-1 < (int)uVar3) {
            pcVar12 = (char *)((ulong)uVar3 + (long)puVar9);
            goto LAB_00879f8c;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar4 = (uint *)(ulong)uVar8;
        pcVar12 = (char *)0x0;
        if ((puVar4 == (uint *)0x0) || (pcVar12 = (char *)0x0, puVar9 == puVar4)) goto LAB_00879f8c;
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar4)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar4);
        pcVar12 = (char *)0x0;
        if (lVar2 == 0) goto LAB_00879f8c;
        uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar4));
        *(undefined4 *)(__s + 0x148) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0x443c0fb7) {
          piVar11 = piVar11 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_00879f88;
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(__s + 0x148) = iVar1;
        uVar8 = *puVar9;
        if (uVar8 == 0) break;
      } while( true );
    }
LAB_00879f88:
    pcVar12 = (char *)0x0;
LAB_00879f8c:
    local_80 = *(char **)PTR_PTR_04bb3260;
    if (pcVar12 != (char *)0x0) {
      local_80 = pcVar12;
    }
  }
  if (*local_80 != '\0') {
    local_70 = local_80;
    if (local_80 == "CarnivalReady") {
LAB_0087a020:
      uVar8 = FUN_0087a8f0(param_1,&local_78,param_3,param_4,param_5,0);
      goto LAB_0087a0b8;
    }
    uVar13 = 0;
    bVar6 = true;
    do {
      if (local_80[uVar13] != "CarnivalReady"[uVar13]) break;
      if (local_80[uVar13] == '\0') {
        if (bVar6) goto LAB_0087a020;
        break;
      }
      bVar6 = uVar13 < 0x80000;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80001);
    uVar13 = FUN_00879630(param_1,&local_78,0);
    uVar8 = 0;
    if ((uVar13 & 1) == 0) goto LAB_0087a0b8;
    uVar13 = FUN_0087af00(param_1,&local_78);
    if ((uVar13 & 1) != 0) {
      (**(code **)(local_78 + 0x18))(&local_78);
      local_88[0] = FUN_006bd550(local_70,0);
      uVar10 = FUN_0088c0d0(param_1 + 8,local_88);
      uVar8 = FUN_00875c10(param_1,uVar10,param_3,param_4,param_5);
      goto LAB_0087a0b8;
    }
  }
  uVar8 = 0;
LAB_0087a0b8:
  return uVar8 & 1;
}

