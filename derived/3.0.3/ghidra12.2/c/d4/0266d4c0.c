
bool FUN_0266d4c0(uint param_1)

{
  void *__dest;
  byte *pbVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  void *__src;
  undefined **local_80;
  void *local_78;
  undefined8 local_70;
  undefined1 local_4d;
  undefined4 local_48;
  undefined4 local_24;
  
  bVar7 = (byte)param_1;
  if ((param_1 >> 7 & 1) == 0) {
    local_24 = 0;
    lVar12 = *(long *)PTR_DAT_04bb2720;
    if (lVar12 == 0) {
      plVar14 = &DAT_055c04a0;
    }
    else {
      plVar14 = &DAT_055c04a0;
      if (*(long *)(lVar12 + 0x330) != 0) {
        puVar10 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar12 + 0x338));
        iVar8 = FUN_006bd550(*puVar10,0);
        plVar14 = (long *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          plVar14 = &DAT_055c04a0;
        }
      }
    }
    __dest = (void *)((long)&local_70 + 4);
    local_70 = CONCAT44(local_70._4_4_,0x20);
    local_4d = 0;
    local_80 = &PTR_LAB_048fa8f8;
    local_78 = __dest;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    __src = (void *)plVar14[1];
    if (__dest != __src) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
      lVar12 = 0;
      do {
        if (*(char *)(plVar14[1] + lVar12) == '\0') goto LAB_0266d5ec;
        lVar2 = plVar14[1] + lVar12;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_0266d5ec;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_0266d5ec;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_0266d5ec:
      iVar8 = (int)lVar12;
      if ((int)local_70 <= (int)lVar12) {
        iVar8 = (int)local_70 + -1;
      }
      memcpy(__dest,__src,(long)iVar8);
      *(undefined1 *)((long)__dest + (long)iVar8) = 0;
    }
    local_48 = (undefined4)plVar14[7];
    local_80 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
    uVar11 = FUN_02b5f400(&local_24);
    if ((uVar11 & 1) != 0) {
      local_80 = (undefined **)CONCAT44(local_80._4_4_,local_24);
      if (DAT_05574040 != 0) {
        puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar12 = (**(code **)(*(long *)*puVar10 + 0x38))();
          if (lVar12 == 0) {
            return false;
          }
          lVar12 = lVar12 + 0x70;
        }
        else {
          if (puVar10 == (undefined8 *)0x0) {
            return false;
          }
          if ((long *)puVar10[0x26] == (long *)0x0) {
            return false;
          }
          lVar12 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
          if (lVar12 == 0) {
            return false;
          }
        }
        if ((uint)local_80 < 8) {
          lVar2 = lVar12 + 0x119228 + ((ulong)local_80 & 0xffffffff) * 0xfa08;
          if (7 < (uint)local_80) {
            lVar2 = lVar12 + 0x119228;
          }
          uVar9 = FUN_0180da90();
          lVar12 = *(long *)(lVar2 + 0xf9f8);
          if (lVar12 == 0) {
            uVar11 = 0;
          }
          else {
            if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
              lVar12 = *(long *)(lVar2 + 0xf9f8);
              uVar11 = uVar11 & 0xffffffff;
              if (lVar12 == 0) goto LAB_0266d750;
            }
            plVar14 = *(long **)(lVar12 + 0x20);
            if (plVar14 != (long *)0x0) {
              local_80 = *(undefined ***)(lVar2 + 0xf9d8);
              local_78 = *(void **)(lVar2 + 0xf9e0);
              local_70 = 0xe;
              (**(code **)(*plVar14 + 0x20))(plVar14,&local_80);
            }
          }
LAB_0266d750:
          local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar9);
          pcVar3 = (char *)(*(long *)(lVar2 + 0xf9e0) + *(ulong *)(lVar2 + 0xf9d8));
          pcVar4 = pcVar3 + (ulong)uVar9 + 1;
          if (5 < uVar9) {
            pcVar4 = pcVar3 + 1;
          }
          bVar6 = *pcVar4 != '\0';
          if (*pcVar4 != '\0') {
            pbVar1 = (byte *)(pcVar3 + 7);
            pbVar5 = pbVar1 + uVar9;
            if (5 < uVar9) {
              pbVar5 = pbVar1;
            }
            if ((uint)*pbVar5 < (param_1 & 0xff)) {
              uVar13 = (ulong)uVar9;
              if (5 < uVar9) {
                uVar13 = 0;
              }
              bVar7 = pbVar1[uVar13];
            }
            pbVar5 = pbVar1 + uVar9;
            if (5 < uVar9) {
              pbVar5 = pbVar1;
            }
            *pbVar5 = *pbVar5 - bVar7;
            *pcVar3 = *pcVar3 - bVar7;
          }
          if ((uVar11 & 1) == 0) {
            return bVar6;
          }
          if (*(long *)(lVar2 + 0xf9f8) == 0) {
            return bVar6;
          }
          puVar10 = *(undefined8 **)(*(long *)(lVar2 + 0xf9f8) + 0x18);
          if (puVar10 == (undefined8 *)0x0) {
            return bVar6;
          }
          (**(code **)*puVar10)();
          return bVar6;
        }
      }
    }
  }
  return false;
}

