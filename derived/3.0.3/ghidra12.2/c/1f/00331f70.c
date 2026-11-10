
void FUN_00331f70(long param_1,long param_2)

{
  char cVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = nn::util::BinaryFileHeader::IsSignatureValid(param_2);
  if ((uVar3 & 1) == 0) {
    FUN_0032c3c0("Binary Tag Error.\n");
    sVar2 = *(short *)(param_2 + 10);
  }
  else {
    sVar2 = *(short *)(param_2 + 10);
  }
  if (sVar2 == 0x26) {
    cVar1 = *(char *)(param_2 + 9);
  }
  else {
    FUN_0032c5d0("Data    Version:%d\n");
    FUN_0032c5d0("Runtime Version:%d\n",0x26);
    FUN_0032c3c0("Binary Version Error!!! Please check your binary file.\n");
    cVar1 = *(char *)(param_2 + 9);
  }
  if (cVar1 == '\x04') {
    uVar3 = nn::util::BinaryFileHeader::IsAlignmentValid();
  }
  else {
    FUN_0032c5d0("Data    API:%d\n");
    FUN_0032c5d0("Runtime API:%d\n",4);
    FUN_0032c3c0("Graphic API Version unmatched !!! Please check your binary file.\n");
    uVar3 = nn::util::BinaryFileHeader::IsAlignmentValid();
  }
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar4 = nn::util::BinaryFileHeader::GetAlignment();
  FUN_0032c5d0("Required Alignment:%d\n",uVar4);
  uVar6 = *(ulong *)(param_1 + 0x38);
  uVar5 = nn::util::BinaryFileHeader::GetAlignment();
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = uVar6 / uVar5;
  }
  FUN_0032c5d0("               Gap:%d\n",uVar6 - uVar3 * uVar5);
  FUN_0032c3c0("Alignment Error!!! Please check your binary file.\n");
  return;
}

