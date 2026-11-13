
bool FUN_011e8aa0(long param_1,long param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  
  piVar1 = (int *)(param_1 + 0x24f78);
  iVar7 = *piVar1;
  if (iVar7 < 1) {
    bVar8 = false;
  }
  else if (*(int *)(param_2 + 0x24) == 0x1b) {
    iVar5 = 0;
    pcVar4 = (char *)(param_1 + 0x278);
    bVar8 = true;
    do {
      if (((((*(ushort *)(pcVar4 + 0x68) >> 3 & 1) != 0) &&
           (*(int *)(param_2 + 8) == *(int *)(pcVar4 + 0x18))) &&
          (*(int *)(param_2 + 0xc) == *(int *)(pcVar4 + 0x1c))) && (pcVar4[0x6e] == -1)) {
LAB_011e8cd4:
        FUN_0125685c(pcVar4,param_2,*(undefined4 *)(param_1 + 0x230));
        return bVar8;
      }
      iVar5 = iVar5 + 1;
      pcVar4 = pcVar4 + 0x78;
      bVar8 = iVar5 < iVar7;
    } while (iVar7 != iVar5);
  }
  else {
    iVar5 = 0;
    pcVar4 = (char *)(param_1 + 0x35e);
    bVar8 = true;
    do {
      if (((((*(ushort *)(pcVar4 + -0x7e) >> 3 & 1) != 0) &&
           (*(int *)(param_2 + 8) == *(int *)(pcVar4 + -0xce))) &&
          (*(int *)(param_2 + 0xc) == *(int *)(pcVar4 + -0xca))) &&
         (*(uint *)(param_2 + 0x28) < 0x1d)) {
        uVar3 = 1 << (ulong)(*(uint *)(param_2 + 0x28) & 0x1f);
        if ((uVar3 & 0x10000b00) == 0) {
          if (((uVar3 & 0xc000) != 0) && (pcVar4[-0x78] == *(char *)(param_2 + 0x2e))) {
            FUN_0125685c(pcVar4 + -0xe6,param_2,*(undefined4 *)(param_1 + 0x230));
            if (*(int *)(param_2 + 0x28) == 0xe) {
              *(undefined4 *)(pcVar4 + -0xce) = *(undefined4 *)(param_2 + 0x18);
              uVar2 = *(undefined4 *)(param_2 + 0x1c);
              pcVar4[-0x78] = -1;
              *(undefined4 *)(pcVar4 + -0xca) = uVar2;
              FUN_011ed900(param_1 + 0x1e368,pcVar4 + -0xd6,1,pcVar4 + -0xe6);
            }
            local_60 = *(undefined8 *)(pcVar4 + -0xbe);
            local_58 = *(undefined4 *)(pcVar4 + -0xb6);
            uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x1e220) + 0x18);
            local_70 = 0;
            uStack_68 = 0;
            if ((*(byte *)(*(long *)(param_1 + 0x1e220) + 8) & 10) != 2) {
              uVar6 = 0;
            }
            local_54 = 0xff00;
            FUN_03817890(uVar6,&local_70);
            iVar7 = *piVar1;
            while (iVar5 = iVar5 + 1, iVar5 < iVar7) {
              if ((*(int *)(pcVar4 + -0x56) == *(int *)(param_2 + 8) &&
                   *(int *)(pcVar4 + -0x52) == *(int *)(param_2 + 0xc)) &&
                 (*pcVar4 == *(char *)(param_2 + 0x2e))) {
                *(ushort *)(pcVar4 + -6) = *(ushort *)(pcVar4 + -6) | 0x400;
                iVar7 = *piVar1;
              }
              pcVar4 = pcVar4 + 0x78;
            }
            return bVar8;
          }
        }
        else if (pcVar4[-0x78] == -1) {
          pcVar4 = pcVar4 + -0xe6;
          goto LAB_011e8cd4;
        }
      }
      iVar5 = iVar5 + 1;
      pcVar4 = pcVar4 + 0x78;
      bVar8 = iVar5 < iVar7;
    } while (iVar7 != iVar5);
  }
  return bVar8;
}

