
bool FUN_01a12d50(long param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_34;
  
  if (param_2 == (uint *)0x0) {
    return false;
  }
  if (param_3 == 0x256) {
    if (DAT_04c487d4 != -1) {
      local_34 = 0x1a;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 0x1a & 1) != 0) && (local_34 = 1, (*puVar1 >> 1 & 1) != 0)) {
        *param_2 = 0x1e;
        return true;
      }
    }
    if (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0) {
      return false;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      return false;
    }
    puVar10 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
    if (((DAT_052d2590 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052d2590), iVar3 != 0)) {
      DAT_052d2588 = &PTR_LAB_049fa588;
      __cxa_guard_release(&DAT_052d2590);
    }
    if (puVar10 == (undefined8 *)0x0) {
      return false;
    }
    uVar4 = (**(code **)*puVar10)(puVar10,&DAT_052d2588);
    if ((uVar4 & 1) == 0) {
      return false;
    }
    uVar7 = 0x256 - *(ushort *)(puVar10 + 0x3f);
  }
  else {
    if (param_3 == 0xfffe) {
      return false;
    }
    if (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0) {
      return false;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      return false;
    }
    puVar10 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
    if (((DAT_052d2590 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052d2590), iVar3 != 0)) {
      DAT_052d2588 = &PTR_LAB_049fa588;
      __cxa_guard_release(&DAT_052d2590);
    }
    if (puVar10 == (undefined8 *)0x0) {
      return false;
    }
    uVar4 = (**(code **)*puVar10)(puVar10,&DAT_052d2588);
    if ((uVar4 & 1) == 0) {
      return false;
    }
    uVar7 = (param_3 & 0xffff) - (uint)*(ushort *)(puVar10 + 0x3f);
  }
  if (*(uint *)(puVar10 + 0x3b) <= uVar7) {
    return false;
  }
  lVar5 = *(long *)(puVar10[0x3c] + (long)(int)uVar7 * 8);
  if (lVar5 == 0) {
    return false;
  }
  puVar6 = (undefined2 *)FUN_018aaa70(lVar5,9,0xbace6554,*(undefined8 *)PTR_DAT_04bbeca0);
  if (puVar6 == (undefined2 *)0x0) {
    return false;
  }
  local_3c = *puVar6;
  uVar7 = 0;
  local_3a = *(undefined1 *)(puVar6 + 1);
  *param_2 = 0;
  uVar9 = 0;
  do {
    if ((uVar9 != 3) && (uVar9 < 0x14)) {
      uVar8 = uVar9 + 7;
      if (-1 < (int)uVar9) {
        uVar8 = uVar9;
      }
      if (((uint)((int)uVar8 >> 3) < 3) &&
         ((*(byte *)((long)&local_3c + (ulong)(uint)((int)uVar8 >> 3)) >> (ulong)(uVar9 & 7) & 1) !=
          0)) {
        uVar8 = 0x13;
        if ((int)uVar9 < (int)*(uint *)(param_1 + 0x348)) {
          uVar8 = uVar9;
          if (*(uint *)(param_1 + 0x348) <= uVar9) {
            uVar8 = 0;
          }
          uVar2 = *(uint *)(*(long *)(param_1 + 0x350) + (long)(int)uVar8 * 4);
          uVar8 = 0x13;
          if (uVar2 != 0xffffffff) {
            uVar8 = uVar2;
          }
        }
        uVar7 = 1 << (ulong)(uVar8 & 0x1f) | uVar7;
        *param_2 = uVar7;
      }
    }
    uVar8 = 0x14;
    if ((int)uVar9 < 0x14) {
      uVar8 = uVar9 + 1;
    }
    uVar9 = uVar8;
  } while (uVar8 != 0x14);
  return puVar6 != (undefined2 *)0x0;
}

