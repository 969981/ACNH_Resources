
long FUN_03403cb0(undefined8 param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (DAT_04c487d4 != 0xffff) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x19 & 1) != 0) {
      if (DAT_05aed670 == 0) {
        puVar7 = &DAT_055c04a0;
      }
      else {
        puVar7 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar7 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar3 = FUN_006bd550(*puVar7,0);
          puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar3 != 0x758f7eaf) {
            puVar7 = &DAT_055c04a0;
          }
        }
      }
      iVar3 = *(int *)(puVar7 + 7);
      if (iVar3 == -0x7975b8e8) {
        return 4;
      }
      if (iVar3 == -0x3e092032) {
        return 4;
      }
      if (iVar3 == -0x17df00c3) {
        return 4;
      }
      if (DAT_05aed670 == 0) {
        puVar7 = &DAT_055c04a0;
      }
      else {
        puVar7 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar7 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar3 = FUN_006bd550(*puVar7,0);
          puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar3 != 0x758f7eaf) {
            puVar7 = &DAT_055c04a0;
          }
        }
      }
      iVar3 = *(int *)(puVar7 + 7);
      param_1 = 5;
      if (DAT_05ac0a90 == iVar3) {
        return 5;
      }
      if (DAT_05ac0aa0 == iVar3) {
        return 5;
      }
      if (DAT_05ac0ab0 == iVar3) {
        return 5;
      }
      if (DAT_05ac0ac0 == iVar3) {
        return 5;
      }
      if (DAT_05ac0ad0 == iVar3) {
        return 5;
      }
      if (DAT_05ac0ae0 == iVar3) {
        return 5;
      }
      if (DAT_05ac0af0 == iVar3) {
        return 5;
      }
      if (DAT_05ac0b00 == iVar3) {
        return 5;
      }
      if (DAT_05ac0b10 == iVar3) {
        return 5;
      }
      if (DAT_05ac0b20 == iVar3) {
        return 5;
      }
    }
  }
  uVar4 = FUN_016cf9f0(param_1);
  puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
  if ((uVar4 & 1) != 0) {
    return 6;
  }
  if (DAT_04c487d4 != 0xffff) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8;
    if (0xff < DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
        return 7;
      }
      if (DAT_05aed670 == 0) {
        puVar5 = &DAT_055c04a0;
      }
      else {
        puVar5 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar5 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar3 = FUN_006bd550(*puVar5,0);
          if (iVar3 != 0x758f7eaf) {
            puVar7 = &DAT_055c04a0;
          }
          puVar5 = puVar7;
        }
      }
      iVar3 = *(int *)(puVar5 + 7);
      if (iVar3 < 0x2922957e) {
        if (iVar3 == 0x80e20d8) {
          return 8;
        }
        if (iVar3 == 0xb6a5301) {
          return 8;
        }
        iVar6 = 0x1490248c;
      }
      else {
        if (iVar3 == 0x2922957e) {
          return 8;
        }
        if (iVar3 == 0x51b9e069) {
          return 8;
        }
        iVar6 = 0x7a616e2f;
      }
      if (iVar3 == iVar6) {
        return 8;
      }
      if (DAT_04c487d4 == 0xffff) {
        return 0;
      }
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
    if (0xff < DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar2 >> 0x17 & 1) != 0) && ((*puVar2 >> 0x15 & 1) != 0)) {
      return 3;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
    if (0xff < DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) == 0) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
      if (0xff < DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 6 & 1) != 0) {
        return 1;
      }
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
      if (0xff < DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      return (ulong)((*puVar2 & 0x80) != 0) << 1;
    }
  }
  return 0;
}

