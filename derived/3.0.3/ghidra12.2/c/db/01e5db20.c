
void FUN_01e5db20(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined1 local_58;
  undefined1 uStack_57;
  ushort uStack_56;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined2 auStack_4e [5];
  undefined1 local_44;
  ushort local_3c;
  undefined1 local_3a;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (*(long *)(param_1 + 0x5a8) == 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x358);
  if ((*(int *)(lVar9 + 0x500) == 0) && (uVar8 = *(uint *)(lVar9 + 0x508), -1 < (int)uVar8)) {
    if ((uVar8 < 10) && ((&DAT_053fee41)[(ulong)uVar8 * 0xba0] != '\0')) {
      uVar6 = (ulong)uVar8;
      (&DAT_053fe840)[uVar6 * 0x5d0] = *(undefined2 *)param_2;
      (&DAT_053fe842)[uVar6 * 0xba0] = *(undefined1 *)((long)param_2 + 2);
      (&DAT_053fe843)[uVar6 * 0xba0] = *(undefined1 *)((long)param_2 + 3);
      (&DAT_053fe844)[uVar6 * 0x2e8] = *(undefined4 *)((long)param_2 + 4);
    }
  }
  else if (*(int *)(lVar9 + 0x50c) == -1) {
    uVar8 = *(uint *)(lVar9 + 0x538);
    if (uVar8 == 0xffffffff) {
      FUN_02189da0(*(undefined8 *)PTR_DAT_04bb46e8,lVar9 + 0x3e0,param_2);
    }
    else {
      lVar9 = *(long *)PTR_DAT_04bbcee0 + 0x90 + (ulong)uVar8 * 0x38;
      if (9 < uVar8) {
        lVar9 = *(long *)PTR_DAT_04bbcee0 + 0x90;
      }
      *(undefined2 *)(lVar9 + 0xc) = *(undefined2 *)param_2;
      *(undefined1 *)(lVar9 + 0xe) = *(undefined1 *)((long)param_2 + 2);
      *(undefined1 *)(lVar9 + 0xf) = *(undefined1 *)((long)param_2 + 3);
      *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)((long)param_2 + 4);
    }
  }
  else {
    lVar9 = FUN_021c9770(*(int *)(lVar9 + 0x50c),1);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 0x2b0) = *(undefined2 *)param_2;
      *(undefined1 *)(lVar9 + 0x2b2) = *(undefined1 *)((long)param_2 + 2);
      *(undefined1 *)(lVar9 + 0x2b3) = *(undefined1 *)((long)param_2 + 3);
      *(undefined4 *)(lVar9 + 0x2b4) = *(undefined4 *)((long)param_2 + 4);
    }
  }
  uVar6 = FUN_01e3e21c(*(undefined8 *)(param_1 + 0x358));
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x358);
  if (*(int *)(lVar9 + 0x538) == -1) {
    iVar3 = *(int *)(lVar9 + 0x50c);
    if (iVar3 == -1) {
      local_44 = 0;
      uStack_50 = (undefined2)*(undefined4 *)(lVar9 + 0x508);
      uVar7 = *param_2;
      local_58 = (undefined1)uVar7;
      uStack_57 = (undefined1)((ulong)uVar7 >> 8);
      uStack_56 = (ushort)((ulong)uVar7 >> 0x10);
      uStack_54 = (undefined4)((ulong)uVar7 >> 0x20);
      (**(code **)(*(long *)(lVar9 + 0x3e0) + 0x18))(lVar9 + 0x3e0);
      lVar10 = 0;
      do {
        if (*(char *)(*(long *)(lVar9 + 1000) + lVar10) == '\0') goto LAB_01e5ddfc;
        lVar1 = *(long *)(lVar9 + 1000) + lVar10;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_01e5ddfc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_01e5ddfc;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_01e5ddfc:
      uVar8 = (uint)lVar10;
      if (9 < uVar8) {
        uVar8 = 10;
      }
      (**(code **)(*(long *)(lVar9 + 0x3e0) + 0x18))(lVar9 + 0x3e0);
      memcpy(auStack_4e,*(void **)(lVar9 + 1000),(ulong)uVar8);
      if (DAT_053d0920 < 0) {
        return;
      }
      uVar7 = 0x16;
      iVar3 = DAT_053d0920;
      goto LAB_01e5dd5c;
    }
    local_58 = 0xff;
    uStack_54 = 0xfffe;
    uStack_50 = 0;
    auStack_4e[0] = 0;
    FUN_0277d4ac(&uStack_54);
    uStack_54 = *(undefined4 *)param_2;
    local_58 = (undefined1)iVar3;
    uStack_50 = (undefined2)*(undefined4 *)((long)param_2 + 4);
    auStack_4e[0] = (undefined2)((uint)*(undefined4 *)((long)param_2 + 4) >> 0x10);
    iVar3 = DAT_053d1640;
  }
  else {
    local_3c = 0x23;
    local_3a = 8;
    FUN_020fd3a0(&local_3c,lVar9 + 0x3e0);
    local_58 = 0xff;
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x358) + 0x538);
    uVar5 = local_3c >> 8;
    uVar4 = local_3c << 8;
    uStack_56 = *(ushort *)PTR_DAT_04bb9cf0 >> 8 | *(ushort *)PTR_DAT_04bb9cf0 << 8;
    uStack_54 = 0xfffe;
    uStack_50 = 0;
    auStack_4e[0] = 0;
    FUN_0277d4ac(&uStack_54);
    uStack_54 = *(undefined4 *)param_2;
    local_58 = (undefined1)uVar2;
    uStack_50 = (undefined2)*(undefined4 *)((long)param_2 + 4);
    auStack_4e[0] = (undefined2)((uint)*(undefined4 *)((long)param_2 + 4) >> 0x10);
    iVar3 = DAT_053d16d0;
    uStack_56 = uVar5 | uVar4;
  }
  if (iVar3 < 0) {
    return;
  }
  uVar7 = 0xc;
LAB_01e5dd5c:
  local_32 = 0;
  local_34 = 0xff00;
  local_38 = 0;
  FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,iVar3,&local_38,&local_58,uVar7,0);
  return;
}

