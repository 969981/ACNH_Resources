
void FUN_02231350(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  
  iVar3 = *(int *)(param_1 + 0x424) + -1;
  if ((0 < *(int *)(param_1 + 0x424)) && (*(int *)(param_1 + 0x424) = iVar3, iVar3 == 0)) {
    uVar5 = nn::os::GetSystemTick();
    uVar1 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
    uVar5 = uVar1 ^ uVar1 * 0x800;
    uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
    uVar1 = uVar2 ^ uVar2 * 0x800;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
    *(undefined4 *)(param_1 + 0x428) = 0x3f800000;
    fVar4 = (float)DAT_05460c64;
    uVar5 = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar5 ^ uVar2;
    fVar6 = DAT_05460c64._4_4_ - (float)DAT_05460c64;
    *(int *)(param_1 + 0x424) =
         (int)DAT_05460c5c +
         (int)((ulong)(uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5) *
               (ulong)(uint)(DAT_05460c5c._4_4_ - (int)DAT_05460c5c) >> 0x20);
    *(float *)(param_1 + 0x42c) = fVar4 + fVar6 * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0);
  }
  return;
}

