
void FUN_01d54ad0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined2 *__src;
  long lVar3;
  undefined2 *__dest;
  ulong __n;
  undefined *local_50;
  undefined2 *local_48;
  undefined4 local_40;
  undefined2 local_3c [5];
  undefined2 local_32;
  
  if ((*(int *)(param_1 + 0x380) == 5) &&
     (*(uint *)(param_1 + 0xaa8) < 0xc &&
      (1 << (ulong)(*(uint *)(param_1 + 0xaa8) & 0x1f) & 0xe70U) != 0)) {
    local_32 = 0;
    local_40 = 6;
    local_48 = local_3c;
    local_3c[0] = 0;
    local_50 = PTR_DAT_04bb84e0 + 0x10;
    FUN_01df83c0(&local_50);
    puVar2 = PTR_DAT_04bc1260;
    __dest = *(undefined2 **)(PTR_DAT_04bc1260 + 8);
    (**(code **)(local_50 + 0x18))(&local_50);
    __src = local_48;
    if (__dest != local_48) {
      (**(code **)(local_50 + 0x18))(&local_50);
      lVar3 = 0;
      do {
        if (local_48[lVar3] == 0) goto LAB_01d54c44;
        if (local_48[lVar3 + 1] == 0) {
          lVar3 = lVar3 + 1;
          goto LAB_01d54c44;
        }
        if (local_48[lVar3 + 2] == 0) {
          lVar3 = lVar3 + 2;
          goto LAB_01d54c44;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_01d54c44:
      uVar1 = (uint)lVar3;
      if (*(int *)(puVar2 + 0x10) <= (int)(uint)lVar3) {
        uVar1 = *(int *)(puVar2 + 0x10) - 1;
      }
      __n = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      memcpy(__dest,__src,__n);
      *(undefined2 *)((long)__dest + __n) = 0;
    }
    FUN_01d3f010(**(undefined8 **)PTR_DAT_04bb27d0,PTR_DAT_04bc1260);
  }
  else {
    lVar3 = **(long **)PTR_DAT_04bb27d0;
    if (2 < *(int *)(lVar3 + 0x508) && *(char *)(lVar3 + 0x55e) == '\0') {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,DAT_0536c720);
      uVar1 = DAT_0536c720;
      if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= DAT_0536c720) {
        uVar1 = 0;
      }
      if (*(int *)(lVar3 + 0x508) == 4 &&
          *(char *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) !=
          '\0') {
        FUN_01c9a638();
        *(undefined1 *)(lVar3 + 0x55f) = 1;
      }
    }
  }
  return;
}

