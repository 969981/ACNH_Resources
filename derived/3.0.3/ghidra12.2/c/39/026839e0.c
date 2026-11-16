
void FUN_026839e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char local_4c;
  undefined1 local_4b;
  char local_4a;
  undefined1 local_49;
  char local_48;
  undefined1 local_47;
  char local_46;
  undefined1 local_45;
  char local_44;
  undefined1 local_43;
  char local_42;
  undefined1 local_41;
  char local_40;
  undefined1 local_3f;
  char local_3e;
  undefined1 local_3d;
  char local_3c;
  undefined2 local_3b;
  char local_38 [24];
  
  local_38[0x10] = '\0';
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  local_38[0] = '\0';
  local_38[1] = 0;
  local_38[2] = '\0';
  local_38[3] = 0;
  local_38[4] = '\0';
  local_38[5] = 0;
  local_38[6] = '\0';
  local_38[7] = 0;
  local_38[8] = '\0';
  local_38[9] = 0;
  local_38[10] = '\0';
  local_38[0xb] = 0;
  local_38[0xc] = '\0';
  local_38[0xd] = 0;
  local_38[0xe] = '\0';
  local_38[0xf] = 0;
  if (param_1 == 2) {
    if ((DAT_055b3cb0 != 0) && (*(uint *)(DAT_055b3cb0 + 0x180) < 2)) {
      local_38[0] = *(char *)(DAT_055b3cb0 + 0x16c);
      uVar2 = *(undefined4 *)(DAT_055b3cb0 + 0x16d);
      uVar6 = *(undefined8 *)(DAT_055b3cb0 + 0x171);
      uVar1 = *(undefined4 *)(DAT_055b3cb0 + 0x179);
      local_38[1] = (char)uVar2;
      local_38[2] = (char)((uint)uVar2 >> 8);
      local_38[3] = (char)((uint)uVar2 >> 0x10);
      local_38[4] = (char)((uint)uVar2 >> 0x18);
      local_38[5] = (char)uVar6;
      local_38[6] = (char)((ulong)uVar6 >> 8);
      local_38[7] = (char)((ulong)uVar6 >> 0x10);
      local_38[8] = (char)((ulong)uVar6 >> 0x18);
      local_38[9] = (char)((ulong)uVar6 >> 0x20);
      local_38[10] = (char)((ulong)uVar6 >> 0x28);
      local_38[0xb] = (char)((ulong)uVar6 >> 0x30);
      local_38[0xc] = (char)((ulong)uVar6 >> 0x38);
      local_38[0xd] = (char)uVar1;
      local_38[0xe] = (char)((uint)uVar1 >> 8);
      local_38[0xf] = (char)((uint)uVar1 >> 0x10);
      local_38[0x10] = (char)((uint)uVar1 >> 0x18);
      local_38[0x11] = (char)*(undefined2 *)(DAT_055b3cb0 + 0x17d);
      local_38[0x12] = (char)((ushort)*(undefined2 *)(DAT_055b3cb0 + 0x17d) >> 8);
    }
  }
  else if (DAT_05574040 != 0) {
    FUN_026f4ca0(&local_4c);
    local_38[1] = local_4b;
    local_38[3] = local_49;
    local_38[5] = local_47;
    local_38[7] = local_45;
    local_38[9] = local_43;
    local_38[0xb] = local_41;
    local_38[0xd] = local_3f;
    local_38[0xf] = local_3d;
    local_38[0] = local_4c;
    local_38[2] = local_4a;
    local_38[4] = local_48;
    local_38[6] = local_46;
    local_38[8] = local_44;
    local_38[10] = local_42;
    local_38[0xc] = local_40;
    local_38[0xe] = local_3e;
    local_38[0x10] = local_3c;
    local_38[0x11] = (char)local_3b;
    local_38[0x12] = (char)((ushort)local_3b >> 8);
    if (param_1 == 0) {
      local_38[0x12] = 1;
      if (local_3c != '\0') goto LAB_02683c20;
    }
    else if ((param_1 != 1) || (local_3c != '\0')) {
      if (param_1 == 3) {
        FUN_0252d11c(&local_4c);
        FUN_02582a24(&local_4c);
        uVar3 = FUN_02582d8c(&local_4c,1);
        if ((((uVar3 < 8) &&
             (lVar4 = *(long *)PTR_DAT_04bb4fb8,
             *(char *)(lVar4 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
            (*(int *)(lVar4 + (ulong)uVar3 * 0x13f0 + 0x13d0) == 0)) &&
           ((uVar5 = (ulong)*(byte *)(lVar4 + (ulong)uVar3 * 0x13f0 + 0x13d5), uVar5 < 8 &&
            (local_38[uVar5 * 2] != '\0')))) {
          local_38[uVar5 * 2 + 1] = '\x01';
        }
      }
      goto LAB_02683c20;
    }
    if (local_4c == '\0') {
      lVar4 = 0;
    }
    else if (local_4a == '\0') {
      lVar4 = 1;
    }
    else if (local_48 == '\0') {
      lVar4 = 2;
    }
    else if (local_46 == '\0') {
      lVar4 = 3;
    }
    else if (local_44 == '\0') {
      lVar4 = 4;
    }
    else if (local_42 == '\0') {
      lVar4 = 5;
    }
    else if (local_40 == '\0') {
      lVar4 = 6;
    }
    else {
      if (local_3e != '\0') goto LAB_02683c20;
      lVar4 = 7;
    }
    local_38[lVar4 * 2] = '\x01';
  }
LAB_02683c20:
  FUN_02701b70(local_38);
  return;
}

