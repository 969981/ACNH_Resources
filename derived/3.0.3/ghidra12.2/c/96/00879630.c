
byte FUN_00879630(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  undefined *__s;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  char cVar12;
  undefined *local_70;
  char *pcStack_68;
  
  lVar8 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x28) == 0)) || (*(int *)(lVar8 + 0x80) != 1)) {
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 != -1) {
      local_70 = (undefined *)CONCAT44(local_70._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
      if (0xff < (uint)(int)sVar3) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_008796cc;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar5 = FUN_006bd550(param_2[1],0);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar5);
    puVar7 = (uint *)FUN_0088c0d0(param_1 + 8,&local_70);
    __s = PTR_DAT_04bb3250;
    puVar1 = PTR_DAT_04bb3248;
    if (puVar7 == (uint *)0x0) {
      FUN_00879870(&local_70,param_1,param_2);
      bVar4 = FUN_00879630(param_1,&local_70,0);
    }
    else {
      if (*puVar7 != 0) {
        cVar12 = *PTR_DAT_04bb3248;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *puVar1 = 1;
            memset(__s,0xff,0x288);
            uVar2 = *puVar7;
          }
          else {
            uVar2 = *(uint *)(__s + 4);
            if (-1 < (int)uVar2) {
              if ((((int *)((ulong)uVar2 + (long)puVar7) != (int *)0x0) &&
                  (-1 < *(int *)((ulong)uVar2 + (long)puVar7))) &&
                 (uVar10 = FUN_0273f2dc(), (uVar10 & 1) == 0)) goto LAB_008796cc;
              break;
            }
            if (uVar2 != 0xffffffff) break;
            uVar2 = *puVar7;
          }
          if ((uVar2 == 0) || (puVar9 = (uint *)(ulong)uVar2, puVar7 == puVar9)) break;
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + (lVar8 - (long)puVar9);
          if (lVar8 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
          *(undefined4 *)(__s + 4) = 0xfffffffe;
          if (uVar10 == 0) break;
          piVar11 = (int *)(lVar8 + 4);
          while (piVar11[-1] != -0x58a97601) {
            piVar11 = piVar11 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_00879824;
          }
          iVar6 = 0;
          if (*piVar11 != -1) {
            iVar6 = *piVar11;
          }
          *(int *)(__s + 4) = iVar6;
          if (*puVar7 == 0) break;
        } while( true );
      }
LAB_00879824:
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "CalendarEventStop";
      iVar6 = FUN_02743000(&local_70);
      bVar4 = iVar6 == 0;
    }
  }
  else {
LAB_008796cc:
    bVar4 = 0;
  }
  return bVar4 & 1;
}

