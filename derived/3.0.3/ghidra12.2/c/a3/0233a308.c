
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0233a308(undefined8 *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [24];
  undefined4 local_48;
  undefined4 local_44;
  
  puVar6 = PTR_DAT_04bb43c0;
  if (*(char *)(param_2 + 0xc341) != '\0') {
    *param_1 = 0x8ff;
    FUN_0277d4ac(param_1);
    return;
  }
  if ((*(char *)(param_2 + 0xc205) == '\0') && (**(char **)(param_2 + 0x5fa8) == '\0')) {
    if ((param_3 & 1) == 0) {
LAB_0233a428:
      if ((((DAT_05abbc58 != 0) && (((byte)(&DAT_00001230)[DAT_05abbc58] >> 6 & 1) != 0)) ||
          (DAT_05ab5ea8 == 0)) || ((*(byte *)(DAT_05ab5ea8 + 0x1a71) >> 1 & 1) == 0))
      goto LAB_0233a370;
      uVar5 = *(undefined2 *)(param_2 + 0xc364);
      uVar3 = *(undefined1 *)(param_2 + 0xc366);
      uVar4 = *(undefined1 *)(param_2 + 0xc367);
      local_48 = *(undefined4 *)(param_2 + 0xc364);
      uVar2 = *(undefined4 *)(param_2 + 0xc368);
      local_44 = uVar2;
      uVar9 = FUN_0277d9a8(&local_48);
      if ((uVar9 & 1) != 0) {
        *(undefined2 *)param_1 = uVar5;
        *(undefined1 *)((long)param_1 + 2) = uVar3;
        *(undefined1 *)((long)param_1 + 3) = uVar4;
        *(undefined4 *)((long)param_1 + 4) = uVar2;
        return;
      }
      local_68 = *(undefined4 *)(param_2 + 0xc35c);
      uStack_64 = *(undefined4 *)(param_2 + 0xc360);
      uVar9 = FUN_0277d9a8(&local_68);
      if ((uVar9 & 1) != 0) {
        FUN_01ad5d04(auStack_60,&local_68);
        iVar8 = FUN_01ad76e8(auStack_60);
        if (iVar8 == 0x20) {
          uVar10 = 0xfffd;
          goto LAB_0233a4e4;
        }
      }
      uVar10 = 0x8ff;
    }
    else {
      puVar1 = (undefined4 *)(*(long *)(param_2 + 0xbde8) + 0xd4);
      if (param_4 != (undefined4 *)0x0) {
        puVar1 = param_4;
      }
      local_48 = *puVar1;
      local_44 = puVar1[1];
      lVar11 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(&local_48);
      if (*(long *)puVar6 == 0) goto LAB_0233a428;
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar7) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0233a428;
      FUN_01ad5d04(auStack_60,&local_48);
      iVar8 = FUN_01ad76e8(auStack_60);
      if (1 < iVar8 - 0x1fU) goto LAB_0233a428;
      uVar10 = 0x323c;
    }
LAB_0233a4e4:
    *param_1 = uVar10;
    FUN_0277d4ac(param_1);
  }
  else {
LAB_0233a370:
    uVar2 = DAT_0558600c;
    *(undefined4 *)param_1 = _DAT_05586008;
    *(undefined4 *)((long)param_1 + 4) = uVar2;
  }
  return;
}

