
void _INIT_14(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  
  puVar5 = PTR_DAT_04bcdd58;
  *(undefined8 *)PTR_DAT_04bcdd58 = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  *(undefined8 *)(puVar5 + 0x30) = 0;
  *(undefined8 *)(puVar5 + 0x38) = 0;
  *(undefined8 *)(puVar5 + 0x40) = 0;
  *(undefined8 *)(puVar5 + 0x48) = 0;
  *(undefined8 *)(puVar5 + 0x50) = 0;
  *(undefined8 *)(puVar5 + 0x58) = 0;
  *(undefined8 *)(puVar5 + 0x60) = 0;
  *(undefined8 *)(puVar5 + 0x68) = 0;
  puVar3 = PTR_DAT_04bcdd48;
  *(undefined4 *)PTR_DAT_04bcdd48 = 3;
  *(undefined8 *)(puVar5 + 0x70) = 0;
  *(undefined8 *)(puVar5 + 0x78) = 0;
  puVar4 = PTR_DAT_04bcdd50;
  *(undefined8 *)PTR_DAT_04bcdd50 = 0x100000000;
  *(undefined4 *)(puVar4 + 8) = 2;
  nn::os::SdkAllocateTlsSlot(PTR_DAT_04bccfe8,(_func_void_ulong *)0x0);
  uVar2 = *(uint *)puVar3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar1 = *(uint *)((long)(puVar4 + uVar7 * 4) + 4);
        iVar6 = (int)uVar7;
        *(int *)(puVar5 + (ulong)*(uint *)(puVar4 + uVar7 * 4) * 4) = iVar6;
        uVar7 = uVar7 + 2;
        *(int *)(puVar5 + (ulong)uVar1 * 4) = iVar6 + 1;
      } while (uVar7 != ((ulong)uVar2 & 0xfffffffe));
    }
    if ((uVar2 & 1) != 0) {
      *(int *)(puVar5 + (ulong)*(uint *)(puVar4 + uVar7 * 4) * 4) = (int)uVar7;
    }
  }
  return;
}

