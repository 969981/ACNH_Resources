
undefined4 FUN_01d6d864(uint *param_1,void *param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  uint local_34;
  
  uVar2 = *param_1;
  if (uVar2 - 4 < 2) {
LAB_01d6d89c:
    plVar7 = *(long **)(param_1 + 4);
    if (plVar7 == (long *)0x0) {
      return 3;
    }
LAB_01d6d8a4:
    plVar1 = &DAT_04178a58;
    if ((char)plVar7[0xd7] != '\0') {
      plVar1 = plVar7;
    }
    if (*plVar1 != *(long *)(param_1 + 2)) {
      return 3;
    }
  }
  else {
    if (uVar2 == 0) {
      return 3;
    }
    if (uVar2 == 1) goto LAB_01d6d89c;
    if (((uVar2 & 0xfffffffe) == 8) && (plVar7 = *(long **)(param_1 + 4), plVar7 != (long *)0x0))
    goto LAB_01d6d8a4;
  }
  bVar3 = (byte)param_1[10];
  if ((bVar3 >> 2 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 6);
    lVar8 = lVar4;
    if (lVar4 == 0) {
      if ((bVar3 & 1) == 0) {
        return 1;
      }
      lVar8 = *(long *)(param_1 + 8);
      if (lVar8 == 0) goto LAB_01d6da10;
    }
    if (*(char *)(lVar8 + 0x74) == '\0') {
      return 3;
    }
    if ((lVar4 == 0) || (lVar8 = *(long *)(param_1 + 8), lVar8 == 0)) {
      if ((bVar3 & 1) == 0) {
LAB_01d6da10:
        uVar6 = 1;
        if ((bVar3 & 2) != 0) {
          uVar6 = 2;
        }
        return uVar6;
      }
    }
    else if (*(char *)(lVar4 + 0x74) != '\0') {
      uVar9 = *(undefined8 *)(param_1 + 4);
      uVar5 = FUN_01cf6220(lVar4,lVar8);
      if ((uVar5 & 1) == 0) {
        memset(param_2,0,0x8a8);
        FUN_027c0ee4((long)param_2 + 8);
        memset((void *)((long)param_2 + 0x78),0,0x830);
        *(byte *)((long)param_2 + 0x70) = *(byte *)((long)param_2 + 0x70) | 1;
        return 2;
      }
      uVar5 = FUN_01cf5e90(param_2,lVar8,uVar9);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 4) != 0) {
          local_4c = *(undefined8 *)((long)param_2 + 0x54);
          local_58 = *(undefined8 *)((long)param_2 + 0x48);
          local_50 = *(undefined4 *)((long)param_2 + 0x50);
          local_60 = *(undefined8 *)((long)param_2 + 0x40);
          local_34 = *(uint *)((long)param_2 + 0x6c);
          local_44 = *(undefined8 *)((long)param_2 + 0x5c);
          local_3c = *(undefined8 *)((long)param_2 + 100);
          local_68 = *(undefined8 *)((long)param_2 + 0x38);
          if (1 < local_34) {
            local_34 = 0;
          }
          uVar5 = FUN_0265a200(&local_68,*(long *)(param_1 + 4) + 0x60);
          if ((uVar5 & 1) != 0) {
            *(undefined8 *)((long)param_2 + 0x38) = local_68;
            *(undefined8 *)((long)param_2 + 0x40) = local_60;
            *(undefined8 *)((long)param_2 + 0x48) = local_58;
            *(undefined1 *)((long)param_2 + 0x50) = (undefined1)local_50;
            *(undefined8 *)((long)param_2 + 100) = local_3c;
            *(undefined8 *)((long)param_2 + 0x54) = local_4c;
            *(undefined8 *)((long)param_2 + 0x5c) = local_44;
            if (1 < local_34) {
              local_34 = 0;
            }
            *(uint *)((long)param_2 + 0x6c) = local_34;
          }
        }
        return 0;
      }
    }
  }
  return 2;
}

