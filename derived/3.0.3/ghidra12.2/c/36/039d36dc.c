
/* WARNING: Type propagation algorithm not settling */

void FUN_039d36dc(long param_1)

{
  uint uVar1;
  undefined1 auStack_58 [56];
  
  uVar1 = *(uint *)(param_1 + 0x498);
  if ((uVar1 & 1) != 0) {
    FUN_006d8678(auStack_58,&DAT_0406a3d7,"GBuffer(Albedo)",&DAT_0407ebb1);
    uVar1 = *(uint *)(param_1 + 0x498);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_006d8678(auStack_58,&DAT_0406a3d7,"GBuffer(Normal)",&DAT_0407ebb1);
    uVar1 = *(uint *)(param_1 + 0x498);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_006d8678(auStack_58,&DAT_0406a3d7,"GBuffer(MaterialID)",&DAT_0407ebb1);
    uVar1 = *(uint *)(param_1 + 0x498);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FUN_006d8678(auStack_58,&DAT_0406a3d7,"GBuffer(Emission)",&DAT_0407ebb1);
    uVar1 = *(uint *)(param_1 + 0x498);
  }
  if ((uVar1 >> 4 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0xa70);
  }
  else {
    FUN_006d8678(auStack_58,&DAT_0406a3d7,"GBuffer(Shadow)",&DAT_0407ebb1);
    uVar1 = *(uint *)(param_1 + 0xa70);
  }
  if ((uVar1 & 1) != 0) {
    FUN_006d8678(auStack_58,&DAT_0406a3d7,"GBuffer(Albedo)","(Half)");
    uVar1 = *(uint *)(param_1 + 0xa70);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_006d8678(auStack_58,&DAT_0406a3d7,"GBuffer(Normal)","(Half)");
    uVar1 = *(uint *)(param_1 + 0xa70);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_006d8678(auStack_58,&DAT_0406a3d7,"GBuffer(MaterialID)","(Half)");
    uVar1 = *(uint *)(param_1 + 0xa70);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FUN_006d8678(auStack_58,&DAT_0406a3d7,"GBuffer(Emission)","(Half)");
    uVar1 = *(uint *)(param_1 + 0xa70);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    FUN_006d8678(auStack_58,&DAT_0406a3d7,"GBuffer(Shadow)","(Half)");
  }
  return;
}

