
void FUN_023f328c(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  byte local_34 [4];
  undefined8 local_30;
  char *local_28;
  
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  local_28 = "CommonChairSitdownReady";
  FUN_017081d0(puVar4,&local_30,6,1,0);
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
    if (7 < *(byte *)(param_1 + 0x1ee8)) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    *(undefined8 *)(lVar1 + 0x420) = 0x100000000;
    *(undefined4 *)(lVar1 + 0x4c0) = 0;
    local_34[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    local_30 = (undefined *)
               CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,
                        (float)*(int *)(param_1 + 0x1902) * 0.001);
    local_28 = (char *)CONCAT44(local_28._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
    bVar2 = FUN_0230127c(0x40600000,lVar1 + 0x4c8,local_34,&local_30,0);
    *(byte *)(param_1 + 0xb48) = bVar2 & 1;
  }
  return;
}

