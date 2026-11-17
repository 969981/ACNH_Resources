
/* WARNING: Removing unreachable block (ram,0x02c80834) */
/* WARNING: Removing unreachable block (ram,0x02c80850) */

void FUN_02c806e0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  undefined *local_a80;
  undefined2 local_a78;
  undefined4 local_a74;
  undefined *local_a70;
  undefined2 *puStack_a68;
  undefined4 local_a60;
  undefined2 local_a5c [255];
  undefined2 local_85e;
  undefined *local_858;
  undefined2 *local_850;
  undefined4 local_848;
  undefined2 local_844 [106];
  undefined4 local_770;
  undefined4 local_76c;
  undefined2 local_768;
  undefined2 local_646;
  undefined *local_640;
  undefined2 *local_638;
  undefined4 local_630;
  undefined2 local_62c [255];
  undefined2 local_42e;
  undefined2 local_428;
  undefined1 local_3cc;
  undefined1 local_370;
  undefined8 local_36c;
  undefined4 local_364;
  undefined1 local_360;
  undefined1 local_35c;
  undefined1 auStack_35a [674];
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_60;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  local_85e = 0;
  local_a5c[0] = 0;
  local_850 = local_844;
  local_844[0] = 0;
  local_a78 = 0x100;
  puStack_a68 = local_a5c;
  local_a80 = PTR_DAT_04bb8a58 + 0x10;
  local_a60 = 0x100;
  local_848 = 0x100;
  local_630 = 0x100;
  local_646 = 0;
  local_a70 = PTR_DAT_04bb8a50 + 0x10;
  local_42e = 0;
  local_428 = 0;
  local_638 = local_62c;
  local_62c[0] = 0;
  local_3cc = 0;
  local_370 = 0;
  local_36c = 0xfffe00000000;
  local_364 = 0;
  local_858 = local_a70;
  local_640 = local_a70;
  FUN_0277d4ac((long)&local_36c + 4);
  local_360 = 0;
  local_35c = 0;
  memset(auStack_35a,0,0x2a2);
  local_b8 = 0xfffe;
  local_b4 = 0;
  uStack_ac = 0;
  local_60 = 0xfffe;
  local_a4 = 0;
  uStack_9c = 0;
  local_94 = 0;
  uStack_8c = 0;
  local_84 = 0;
  uStack_7c = 0;
  FUN_0277d4ac(&local_60);
  puVar3 = PTR_DAT_04bb37e0;
  puVar2 = PTR_DAT_04bb2230;
  local_54 = 0;
  local_50 = 0;
  local_60 = *(undefined8 *)PTR_DAT_04bb37e0;
  lVar5 = 0;
  if (*(long *)PTR_DAT_04bb2230 != 0) {
    lVar5 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
  }
  local_48 = 0xf;
  local_44 = 0;
  if (DAT_05739db8 != 0) {
    lVar1 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar1 = 0;
    }
    if (*(char *)(lVar1 + 0x86) != '\0') {
      *(undefined1 *)(lVar1 + 0x87) = 1;
    }
  }
  FUN_0338faf0(lVar5 + 0xdc0,&local_a80);
  lVar5 = *(long *)puVar2;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  if (*(char *)(lVar5 + 0x18b8) == '\0') {
    bVar4 = 1;
  }
  else {
    bVar4 = (**(code **)(*(long *)(lVar5 + 0x18b0) + 0x18))(lVar5 + 0x18b0);
    *(char *)(lVar5 + 0x18b8) = '\0';
  }
  local_a80 = PTR_DAT_04bb8d40;
  *(byte *)(lVar5 + 0x18b9) = bVar4 & 1;
  local_a74 = *(undefined4 *)(lVar5 + 0x18bc);
  local_a78 = *(undefined2 *)(lVar5 + 0x18b8);
  local_a80 = local_a80 + 0x10;
  FUN_02c63390(&local_a70,lVar5 + 0x18c0);
  local_76c = *(undefined4 *)(lVar5 + 0x1bc4);
  local_770 = *(undefined4 *)(lVar5 + 0x1bc0);
  local_a74 = 0;
  local_768 = *(undefined2 *)(lVar5 + 0x1bc8);
  FUN_02c63ea0(&local_a70);
  local_770 = *(undefined4 *)puVar3;
  local_76c = *(undefined4 *)(puVar3 + 4);
  local_768 = 0;
  FUN_0338fe50(*(undefined8 *)(*(long *)puVar2 + 0x28),0,&local_a80);
  return;
}

