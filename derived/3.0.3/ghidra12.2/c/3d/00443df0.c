
void FUN_00443df0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_00443e90();
  lVar2 = FUN_0043c4e0(DAT_04c6f050);
  lVar1 = DAT_04c6f058;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  puVar3 = (undefined8 *)FUN_00422030(*(undefined8 *)(lVar1 + 0x60),0x30,1);
  *(undefined4 *)((long)puVar3 + 0x24) = 0xffffffff;
  FUN_0043c4a0(DAT_04c6f410,puVar3);
  FUN_0043c4a0(DAT_04c6f412,0);
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((long)puVar3 + 0x24) = 0xffffffff;
  *puVar3 = 0;
  puVar3[1] = 0;
  return;
}

