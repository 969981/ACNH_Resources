
void FUN_0030d390(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (*(char *)(param_3 + 0xf) != '\0') {
    uVar5 = *(ushort *)(param_3 + 8);
    uVar6 = (uint)uVar5;
    if (0xffffd8f0 < uVar6 - 10000) {
      bVar1 = *(byte *)(param_3 + 10);
      if ((0xfffffff3 < bVar1 - 0xd) && (bVar2 = *(byte *)(param_3 + 0xb), bVar2 != 0)) {
        if (bVar1 < 0xc) {
          if ((1 << (ulong)(bVar1 & 0x1f) & 0xa50U) == 0) {
            if (bVar1 != 2) goto LAB_0030d498;
            if ((uVar6 * -0x3d70a3d7 >> 4 | uVar6 * -0x70000000) < 0xa3d70b) {
              bVar7 = 0x1d;
            }
            else {
              bVar7 = 0x1c;
              if ((0x28f5c28 < (uVar6 * -0x3d70a3d7 >> 2 | uVar6 * 0x40000000)) &&
                 (bVar7 = 0x1c, (uVar5 & 3) == 0)) {
                bVar7 = 0x1d;
              }
            }
            if (bVar2 <= bVar7) goto LAB_0030d3f8;
          }
          else if (bVar2 < 0x1f) goto LAB_0030d3f8;
        }
        else {
LAB_0030d498:
          if (bVar2 < 0x20) {
LAB_0030d3f8:
            bVar7 = *(byte *)(param_3 + 0xc);
            if (((bVar7 < 0x18) && (bVar3 = *(byte *)(param_3 + 0xd), bVar3 < 0x3c)) &&
               (bVar4 = *(byte *)(param_3 + 0xe), bVar4 < 0x3c)) {
              *(char *)(param_2 + 0x38f) = *(char *)(param_3 + 0xf);
              *(ushort *)(param_2 + 0x388) = uVar5;
              *(byte *)(param_2 + 0x38a) = bVar1;
              *(byte *)(param_2 + 0x38b) = bVar2;
              *(byte *)(param_2 + 0x38c) = bVar7;
              *(byte *)(param_2 + 0x38d) = bVar3;
              *(byte *)(param_2 + 0x38e) = bVar4;
              local_24 = 0;
              *(uint *)(param_2 + 0x628) = *(uint *)(param_2 + 0x628) | 0x80;
              goto LAB_0030d4bc;
            }
          }
        }
      }
    }
  }
  local_24 = 0x10c07;
LAB_0030d4bc:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

