
/* WARNING: Removing unreachable block (ram,0x036db67c) */

undefined4 FUN_036db63c(long param_1,uint *param_2)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  uint local_48;
  ushort local_44;
  int local_40;
  uint local_3c;
  uint uStack_38;
  undefined1 local_34;
  
  if (((DAT_05574040 != 0) && (local_3c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0))
     && (lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
        lVar4 != 0)) {
    uVar7 = *param_2;
    if ((*(long **)(lVar4 + 0x36620) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x36620), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    pcVar1 = (char *)(*(long *)(lVar4 + 0x36608) + *(long *)(lVar4 + 0x36600));
    local_3c = (uint)*pcVar1;
    if ((local_3c == 2) &&
       ((((DAT_05ab5ea8 == 0 || (*(int *)(DAT_05ab5ea8 + 0x14) == 0)) ||
         ((DAT_05ab8198 != (ushort *)0x0 && ((*DAT_05ab8198 & 1) != 0)))) &&
        ((uVar7 != 5 && (uVar7 != 6)))))) {
      local_3c = (uint)*(ushort *)(pcVar1 + 0x899c);
      bVar2 = uVar7 == local_3c;
    }
    else {
      bVar2 = false;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x36620) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x36620) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (!bVar2) {
      return 0;
    }
    local_48 = 0;
    local_44 = 0;
    uVar6 = FUN_03768fb0(&local_48);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar7 = (uint)local_44;
    if ((uVar7 & 0xf) - 1 < 3) {
      uVar3 = local_48;
      if (4 < local_48) {
        uVar3 = 5;
      }
      local_3c = 2;
      FUN_036db078(param_1,&local_3c);
      local_34 = 1;
      local_3c = uVar3;
      uStack_38 = uVar7 & 0xf;
      FUN_036c7b10(param_1 + 200,&local_3c);
      *(undefined4 *)(DAT_05ab5ea8 + 0xc) = *(undefined4 *)(param_1 + 0xd4);
      if (DAT_05abbc58 != 0) {
        *(uint *)(&DAT_00001230 + DAT_05abbc58) = *(uint *)(&DAT_00001230 + DAT_05abbc58) | 2;
      }
      *(undefined4 *)(param_1 + 0x14) = 1;
      *(uint *)(param_1 + 0x1a70) = *(uint *)(param_1 + 0x1a70) | 2;
      *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + local_40;
      *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + local_40;
      FUN_036db890(param_1);
      return 1;
    }
  }
  return 0;
}

