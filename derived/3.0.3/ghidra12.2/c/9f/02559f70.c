
void FUN_02559f70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 local_7c [4];
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  if (*(int *)(param_1 + 0x11c4) != 0) {
    *(int *)(param_1 + 0x11c4) = *(int *)(param_1 + 0x11c4) + -1;
  }
  if (*(int *)(param_1 + 0x11a8) != 0) {
    *(int *)(param_1 + 0x11a8) = *(int *)(param_1 + 0x11a8) + -1;
  }
  if (*(int *)(param_1 + 0x11ac) != 0) {
    *(int *)(param_1 + 0x11ac) = *(int *)(param_1 + 0x11ac) + -1;
  }
  FUN_02507c6c(local_6c,1,1,0,0);
  puVar4 = PTR_DAT_04bb5038;
  puVar3 = PTR_DAT_04bb4fb8;
  puVar2 = PTR_DAT_04bb43c0;
  puVar1 = PTR_DAT_04bb27f0;
  uVar9 = (uint)local_6c[0];
  local_74 = local_68;
  local_78[0] = 0xff;
  if (local_6c[0] < 8) {
    local_78[0] = local_6c[0];
  }
  local_70 = local_64;
  if (7 < local_6c[0]) {
    return;
  }
  do {
    local_7c[0] = (undefined1)uVar9;
    uVar5 = FUN_02582d8c(local_7c,1);
    if ((((uVar5 < 8) &&
         (lVar7 = *(long *)puVar3, *(char *)(lVar7 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
        (*(char *)(lVar7 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) &&
       ((uVar5 = FUN_02582d8c(local_7c,1), uVar5 < 8 &&
        (lVar7 = *(long *)puVar3, *(char *)(lVar7 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')))) {
      lVar7 = lVar7 + (ulong)uVar5 * 0x13f0;
      if (*(char *)(lVar7 + 0x18) == '\0') {
        lVar8 = *(long *)puVar2;
        uVar5 = FUN_0277d6c4(lVar7 + 0x1c);
        if (*(long *)puVar2 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) goto LAB_0255a0c4;
        }
        if (((**(char **)(lVar7 + 0xe0) != '\0') && (**(char **)(lVar7 + 0x138) != '\0')) ||
           ((**(char **)(lVar7 + 0x230) != '\0' && (**(char **)(lVar7 + 0x288) != '\0'))))
        goto LAB_0255a0c4;
      }
      else {
LAB_0255a0c4:
        lVar8 = *(long *)puVar1;
        if (lVar8 != 0) {
          *(uint *)(lVar8 + 0x43c) = *(uint *)(lVar8 + 0x43c) | 0x10;
        }
      }
      if ((*(int *)(lVar7 + 0x4f0) != 0) && (lVar7 = *(long *)puVar1, lVar7 != 0)) {
        *(uint *)(lVar7 + 0x43c) = *(uint *)(lVar7 + 0x43c) | 0x10;
      }
    }
    uVar10 = (ulong)uVar9;
    do {
      if (uVar10 == 7) {
        return;
      }
      uVar10 = uVar10 + 1;
      uVar6 = FUN_02507924(local_78,puVar4 + uVar10);
    } while ((uVar6 & 1) == 0);
    local_78[0] = puVar4[uVar10];
    uVar9 = (uint)local_78[0];
    if (7 < uVar9) {
      return;
    }
  } while( true );
}

