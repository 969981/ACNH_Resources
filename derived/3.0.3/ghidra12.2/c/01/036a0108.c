
void FUN_036a0108(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  iVar7 = 0;
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x330) == 0) {
      iVar7 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
      iVar3 = FUN_006bd550(*puVar4,0);
      iVar7 = 0;
      if (iVar3 == 0x758f7eaf) {
        iVar7 = 0;
        if (*(long *)puVar1 != 0) {
          lVar6 = *(long *)(*(long *)puVar1 + 0x330);
          iVar7 = 0;
          if (lVar6 != 0) {
            iVar7 = *(int *)(lVar6 + 0x244);
          }
        }
      }
    }
  }
  if (DAT_0529240c == iVar7) {
    iVar7 = 1;
    bVar2 = true;
  }
  else {
    uVar5 = FUN_0180c600();
    if ((uVar5 & 1) == 0) {
      if (((DAT_05ab5ea8 == 0) || ((DAT_05ab8198 != (ushort *)0x0 && ((*DAT_05ab8198 & 1) != 0))))
         || ((*(int *)(DAT_05ab5ea8 + 0x14) != 4 && (*(int *)(DAT_05ab5ea8 + 0x14) != 5)))) {
        if ((DAT_0523adf0 == 0) || (*(int *)(DAT_0523adf0 + 0x98) == 0)) {
          if (DAT_04c487d4 == -1) {
            bVar2 = false;
            iVar7 = 0;
          }
          else {
            puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
            if (0xff < (uint)(int)DAT_04c487d4) {
              puVar1 = PTR_DAT_04bc39f8;
            }
            bVar2 = (*(uint *)(puVar1 + 4) & 1) != 0;
            iVar7 = (uint)bVar2 << 2;
          }
        }
        else {
          bVar2 = true;
          iVar7 = 3;
        }
      }
      else {
        iVar7 = 0;
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
      iVar7 = 2;
    }
  }
  *(int *)(param_1 + 0x1044) = iVar7;
  *(bool *)(param_1 + 0x1040) = bVar2;
  return;
}

