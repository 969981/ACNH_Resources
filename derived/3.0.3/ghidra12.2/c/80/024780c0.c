
/* WARNING: Removing unreachable block (ram,0x024783bc) */

void FUN_024780c0(long param_1,undefined1 param_2,undefined1 param_3,long param_4,undefined1 param_5
                 ,undefined1 param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  long lVar12;
  uint *puVar13;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined1 *)(param_1 + 0x1981) = param_3;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  *(undefined1 *)(param_1 + 0x1980) = param_2;
  puVar2 = (undefined8 *)PTR_DAT_04bb37e0;
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_4 + 0x124);
  }
  uVar11 = *puVar2;
  *(undefined1 *)(param_1 + 0x198c) = 0;
  *(undefined1 *)(param_1 + 0x198d) = param_6;
  *(undefined8 *)(param_1 + 0x1982) = uVar11;
  puVar6 = PTR_DAT_04bb4718;
  *(undefined1 *)(param_1 + 0x198e) = param_5;
  if (((((*(byte *)(param_1 + 0x1ee8) < 8) &&
        (uVar8 = FUN_02582d8c(pbVar1,1), puVar7 = PTR_DAT_04bb4fb8, uVar8 < 8)) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')) &&
      ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) != '\0' &&
       (uVar8 = FUN_02582d8c(pbVar1,1), uVar8 < 8)))) &&
     (*(char *)(*(long *)puVar7 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')) {
    lVar12 = *(long *)puVar7 + (ulong)uVar8 * 0x13f0 + 0x378;
    if (param_4 == 0) {
      FUN_0257a130(lVar12);
    }
    else {
      FUN_02478400(lVar12,param_4);
      if (*(char *)(param_4 + 0x112) == '\0') {
        FUN_02332994(param_1);
        FUN_02332b04(param_1,0,0);
        *(undefined1 *)(param_1 + 0x198c) = 1;
        lVar12 = *(long *)puVar6;
        if (lVar12 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(&DAT_054f0960);
            puVar13 = (uint *)&DAT_054f0958;
            if (iVar9 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar13 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar13 = (uint *)(lVar12 + 0x204);
          if ((ulong)*pbVar1 < 8) {
            puVar13 = puVar13 + (ulong)*pbVar1 * 2;
          }
        }
        *puVar13 = *puVar13 | 0x200;
      }
    }
  }
  puVar10 = (undefined2 *)FUN_02547c90(pbVar1);
  lVar12 = *(long *)puVar6;
  if ((lVar12 != 0) && ((ulong)*pbVar1 < 8)) {
    lVar12 = lVar12 + (ulong)*pbVar1 * 0xc;
    uVar4 = *(undefined1 *)(puVar10 + 1);
    uVar5 = *(undefined1 *)((long)puVar10 + 3);
    uVar3 = *(undefined4 *)(puVar10 + 2);
    *(undefined2 *)(lVar12 + 0x284) = *puVar10;
    *(undefined1 *)(lVar12 + 0x286) = uVar4;
    *(undefined1 *)(lVar12 + 0x287) = uVar5;
    *(undefined4 *)(lVar12 + 0x288) = uVar3;
    *(undefined2 *)(lVar12 + 0x28c) = 0x100;
  }
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
  lVar12 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar12 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar12,0x2b);
  return;
}

