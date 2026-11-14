
undefined8 FUN_0170ef20(undefined8 param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  void *__src;
  byte bVar3;
  uint uVar4;
  int iVar5;
  void *__dest;
  long lVar6;
  long lVar7;
  uint local_70;
  undefined4 uStack_6c;
  void *local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  byte local_44 [4];
  
  *(undefined2 *)(param_2 + 0x58) = 0;
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_3);
  lVar6 = *(long *)puVar2;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_50 = 0;
      local_58 = *param_3;
      uStack_54 = param_3[1];
      local_60 = &PTR_FUN_04a36b50;
      uVar4 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar2 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_3);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8), lVar6 != 0)) {
            local_50 = lVar6;
          }
        }
      }
      iVar5 = FUN_01ad78cc(&local_60);
      local_44[0] = 0;
      local_44[1] = 0;
      FUN_01adab50(&local_60,local_44);
      uVar4 = 0;
      do {
        if ((uVar4 != 0) && (uVar4 < 0xe)) {
          uVar1 = uVar4 + 7;
          if (-1 < (int)uVar4) {
            uVar1 = uVar4;
          }
          local_70 = uVar4;
          if (((uint)((int)uVar1 >> 3) < 2) &&
             ((local_44[(uint)((int)uVar1 >> 3)] >> (ulong)(uVar4 & 7) & 1) != 0))
          goto LAB_0170f0bc;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0xe);
      uVar4 = 0;
LAB_0170f0bc:
      if ((uVar4 == 9) || (iVar5 == 0x1c)) {
        FUN_01ad8070(&local_70,&local_60);
        __dest = *(void **)(param_2 + 8);
        (**(code **)(CONCAT44(uStack_6c,local_70) + 0x18))(&local_70);
        __src = local_68;
        if (__dest != local_68) {
          (**(code **)(CONCAT44(uStack_6c,local_70) + 0x18))(&local_70);
          lVar6 = 0;
          do {
            if (*(char *)((long)local_68 + lVar6) == '\0') goto LAB_0170f15c;
            if (*(char *)((long)local_68 + lVar6 + 1) == '\0') {
              lVar6 = lVar6 + 1;
              goto LAB_0170f15c;
            }
            if (*(char *)((long)local_68 + lVar6 + 2) == '\0') {
              lVar6 = lVar6 + 2;
              goto LAB_0170f15c;
            }
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
          lVar6 = 0;
LAB_0170f15c:
          iVar5 = (int)lVar6;
          if (*(int *)(param_2 + 0x10) <= (int)lVar6) {
            iVar5 = *(int *)(param_2 + 0x10) + -1;
          }
          memcpy(__dest,__src,(long)iVar5);
          *(undefined1 *)((long)__dest + (long)iVar5) = 0;
        }
        bVar3 = FUN_01ad8a80(&local_60);
        *(byte *)(param_2 + 0x58) = bVar3 & 1;
        bVar3 = FUN_01ad8800(&local_60);
        *(byte *)(param_2 + 0x59) = bVar3 & 1;
        if ((((bVar3 & 1) != 0) || (*(char *)(param_2 + 0x58) != '\0')) &&
           (**(char **)(param_2 + 8) != '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}

