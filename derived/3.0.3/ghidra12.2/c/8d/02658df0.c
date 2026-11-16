
undefined8 FUN_02658df0(byte *param_1)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  long *plVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  byte local_24 [4];
  
  plVar5 = DAT_0537d558;
  if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
    pcVar6 = (char *)FUN_02582a24(param_1,1);
    lVar10 = *plVar5;
    cVar3 = *pcVar6;
    uVar8 = (uint)cVar3;
    bVar4 = *(byte *)(lVar10 + 0x473);
    if ((long)(char)bVar4 == 0xffffffffffffffff) {
      if (DAT_0537bdbc != cVar3) {
        return 0;
      }
    }
    else {
      puVar1 = (uint *)(lVar10 + 0x48);
      puVar2 = puVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = puVar1;
      }
      pcVar6 = PTR_DAT_04bc1220;
      if ((*puVar2 & 8) != 0) {
        pcVar6 = (char *)(lVar10 + 0x473);
      }
      if (*pcVar6 != cVar3) {
        if ((*puVar2 >> 3 & 1) == 0) {
          return 0;
        }
        if (uVar8 == 0xffffffff) {
          return 0;
        }
        puVar2 = puVar1 + (ulong)uVar8 * 0x20;
        if (7 < uVar8) {
          puVar2 = puVar1;
        }
        if (((byte)*puVar2 >> 3 & 1) == 0) {
          return 0;
        }
      }
    }
    lVar10 = *(long *)PTR_DAT_04bbaed0 + 0xd8 + (ulong)uVar8 * 0x30;
    if (7 < uVar8) {
      lVar10 = *(long *)PTR_DAT_04bbaed0 + 0xd8;
    }
    return *(undefined8 *)(lVar10 + 0x18);
  }
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  uVar7 = FUN_02669430(local_24);
  if (((uVar7 & 1) != 0) && (DAT_05574040 != 0)) {
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar10 != 0) {
        lVar10 = lVar10 + 0x70;
LAB_02658f50:
        if ((*(long **)(FUN_002051f0 + lVar10) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(FUN_002051f0 + lVar10), puVar9 == (undefined8 *)0x0))
        {
          return *(undefined8 *)(*(long *)(FUN_002051d8 + lVar10) + *(long *)(lVar10 + 0x2051d0));
        }
        uVar7 = (**(code **)*puVar9)();
        uVar11 = *(undefined8 *)(*(long *)(FUN_002051d8 + lVar10) + *(long *)(lVar10 + 0x2051d0));
        if ((uVar7 & 1) == 0) {
          return uVar11;
        }
        if (*(long *)(FUN_002051f0 + lVar10) == 0) {
          return uVar11;
        }
        puVar9 = *(undefined8 **)(*(long *)(FUN_002051f0 + lVar10) + 8);
        if (puVar9 == (undefined8 *)0x0) {
          return uVar11;
        }
        (**(code **)*puVar9)();
        return uVar11;
      }
    }
    else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
            (lVar10 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar10 != 0))
    goto LAB_02658f50;
  }
  return 0;
}

