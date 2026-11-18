
void FUN_034592d0(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined **appuStack_6c080 [4];
  undefined8 uStack_6c060;
  undefined1 *puStack_6c058;
  undefined1 *puStack_6c050;
  undefined1 *puStack_6c048;
  long *aplStack_6c040 [26];
  long alStack_6bf70 [53222];
  undefined1 auStack_4040 [16384];
  byte local_24 [4];
  
  iVar1 = FUN_0274bce0(param_1,&DAT_05757a90);
  if (iVar1 == 0) {
    lVar4 = 0x7fe;
    uStack_6c060 = 0;
    puStack_6c058 = (undefined1 *)0x0;
    aplStack_6c040[0] = alStack_6bf70;
    plVar3 = aplStack_6c040[0];
    do {
      lVar4 = lVar4 + -2;
      *plVar3 = (long)(plVar3 + 0x1a);
      plVar3[0x1a] = (long)(plVar3 + 0x34);
      plVar3 = plVar3 + 0x34;
    } while (lVar4 != 0);
    if (auStack_4040 != (undefined1 *)0x0) {
      uStack_6c060 = 0x80000000000;
      puStack_6c058 = auStack_4040;
    }
    if (param_2 == 0) {
      local_24[0] = *PTR_DAT_04bb32e0;
      if (7 < local_24[0]) {
        local_24[0] = 0xff;
      }
      puStack_6c050 = (undefined1 *)aplStack_6c040;
      puStack_6c048 = (undefined1 *)aplStack_6c040;
      FUN_02627260(*(undefined8 *)PTR_DAT_04bb46f0,&uStack_6c060,9,1,local_24);
    }
    else {
      puVar6 = *(undefined8 **)(param_2 + 0x6a008);
      appuStack_6c080[0] = &PTR_FUN_04b2aff8;
      puStack_6c050 = (undefined1 *)aplStack_6c040;
      puStack_6c048 = (undefined1 *)aplStack_6c040;
      if (*(int *)(param_2 + 0x6a000) != 0) {
        lVar4 = (long)*(int *)(param_2 + 0x6a000) << 3;
        puStack_6c050 = (undefined1 *)aplStack_6c040;
        puStack_6c048 = (undefined1 *)aplStack_6c040;
        do {
          uVar5 = *puVar6;
          uVar2 = (*(code *)*appuStack_6c080[0])(appuStack_6c080,uVar5);
          if ((uVar2 & 1) != 0) {
            FUN_00dbf7b0(&uStack_6c060,uVar5);
          }
          puVar6 = puVar6 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    if (0 < (int)uStack_6c060) {
      FUN_0274bfe8(param_1,&DAT_05757a90,1);
    }
  }
  return;
}

