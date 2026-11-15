
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0233a624(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  uVar1 = DAT_0558600c;
  puVar5 = PTR_DAT_04bb43c0;
  if ((((*(char *)(param_2 + 0xc205) == '\0') && (**(char **)(param_2 + 0x5fa8) == '\0')) &&
      ((DAT_05abbc58 == 0 || (((byte)(&DAT_00001230)[DAT_05abbc58] >> 6 & 1) == 0)))) &&
     ((DAT_05ab5ea8 != 0 && ((*(byte *)(DAT_05ab5ea8 + 0x1a71) >> 1 & 1) != 0)))) {
    uVar4 = *(undefined2 *)(param_2 + 0xc374);
    uVar2 = *(undefined1 *)(param_2 + 0xc376);
    uVar3 = *(undefined1 *)(param_2 + 0xc377);
    uVar1 = *(undefined4 *)(param_2 + 0xc378);
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    local_38 = uVar4;
    local_36 = uVar2;
    local_35 = uVar3;
    local_34 = uVar1;
    uVar6 = FUN_0277d6c4(&local_38);
    if (*(long *)puVar5 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        *(undefined2 *)param_1 = uVar4;
        *(undefined1 *)((long)param_1 + 2) = uVar2;
        *(undefined1 *)((long)param_1 + 3) = uVar3;
        *(undefined4 *)((long)param_1 + 4) = uVar1;
        return;
      }
    }
    *param_1 = 0xfffd;
    FUN_0277d4ac(param_1);
  }
  else {
    *(undefined4 *)param_1 = _DAT_05586008;
    *(undefined4 *)((long)param_1 + 4) = uVar1;
  }
  return;
}

