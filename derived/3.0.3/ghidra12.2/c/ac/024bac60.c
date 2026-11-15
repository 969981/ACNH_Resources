
void FUN_024bac60(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_128 [48];
  undefined4 local_68 [7];
  float local_4c;
  float fStack_48;
  float local_44;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar5 = PTR_DAT_04bb4820;
  lVar1 = param_1 + 0x1ee8;
  uVar7 = FUN_009a5fb4(*(undefined8 *)PTR_DAT_04bb4820,&local_4c,lVar1);
  if (((uVar7 & 1) != 0) && (lVar8 = *(long *)(param_1 + 0x60), lVar8 != 0)) {
    if ((*(int *)(lVar8 + 0x1428) != 1) &&
       (fVar10 = *(float *)(lVar8 + 0x133c) - local_4c,
       fVar11 = *(float *)(lVar8 + 0x1340) - fStack_48,
       fVar12 = *(float *)(lVar8 + 0x1344) - local_44,
       2.0 < SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12))) {
      *(undefined1 *)(lVar8 + 0x142d) = 0;
    }
    *(undefined4 *)(lVar8 + 0x12d0) = 0;
    **(undefined1 **)(lVar8 + 0x12e0) = 0;
    *(undefined8 *)(lVar8 + 0x1334) = 0;
    *(ulong *)(lVar8 + 0x133c) = CONCAT44(fStack_48,local_4c);
    *(float *)(lVar8 + 0x1344) = local_44;
    *(undefined4 *)(lVar8 + 0x1428) = 1;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  uVar7 = FUN_009a5d7c(*(undefined8 *)puVar5,lVar1);
  if (((uVar7 & 1) != 0) && (*(uint *)(param_1 + 0x1c04) < 0x12d)) {
    return;
  }
  sVar4 = *(short *)(param_1 + 0x1912);
  if (sVar4 == 2) {
    bVar9 = *(byte *)(param_1 + 0x18f4) | 8;
LAB_024bae20:
    *(byte *)(param_1 + 0x18f4) = bVar9;
    local_68[0] = 3;
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined1 *)(param_1 + 0x1983) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined2 *)(param_1 + 0x1980) = 0x601;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    local_128[0] = 0x19;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
    lVar1 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar1 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar1,0x19);
  }
  else {
    if (sVar4 == 1) {
      local_28 = *(undefined4 *)(param_1 + 0xb28);
      uStack_24 = *(undefined4 *)(param_1 + 0xb2c);
      uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *(undefined4 *)(param_1 + 0xb28) = *(undefined4 *)PTR_DAT_04bb37e0;
      *(undefined4 *)(param_1 + 0xb2c) = uVar3;
      puVar5 = PTR_DAT_04bb43c0;
      if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
         (*(int *)(DAT_0537d558 + 0x80) != 1)) {
        if (DAT_04c487d4 != -1) {
          local_128[0] = 0x20;
          puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar2 = PTR_DAT_04bc39f8;
          }
          if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_024bb06c;
        }
        lVar8 = *(long *)PTR_DAT_04bb43c0;
        uVar6 = FUN_0277d6c4(&local_28);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            FUN_01ad5d04(local_68,&local_28);
            uVar7 = FUN_01b0e0ec(local_68);
            if (((uVar7 & 1) == 0) || (uVar7 = FUN_01b09bec(local_68), (uVar7 & 1) == 0)) {
              uVar6 = FUN_0243bb28(param_1);
              uVar7 = FUN_016dd4c4(lVar1,&local_28,uVar6 & 1);
              if ((uVar7 & 1) != 0) {
                FUN_02448ae4(param_1);
                return;
              }
            }
            else {
              FUN_024f4060(local_128,lVar1,&local_28);
              uVar7 = FUN_024f43cc(local_128);
              if ((uVar7 & 1) != 0) {
                FUN_025583ec(&local_28,lVar1);
                FUN_024487e0(param_1,&local_28);
                return;
              }
            }
          }
        }
      }
    }
    else if (sVar4 == 0) {
      bVar9 = *(byte *)(param_1 + 0x18f4) & 0xf7;
      goto LAB_024bae20;
    }
LAB_024bb06c:
    FUN_02373ee0(param_1,6,1,1);
  }
  return;
}

