
undefined8 FUN_00362450(long param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  char local_158 [256];
  undefined4 local_58;
  undefined1 local_54;
  
  FUN_00361e78(param_1,param_3);
  lVar7 = *(long *)(param_1 + 0xb0);
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x38);
    if (param_4 == (char *)0x0) {
      __n = 0;
    }
    else {
      __n = strlen(param_4);
    }
    uVar5 = (ulong)*(ushort *)(lVar8 + 0xc);
    puVar9 = (uint *)((int *)(lVar8 + 8) + uVar5 * 4);
    uVar2 = *puVar9;
    if (*(int *)(lVar8 + 8) < (int)*puVar9) {
      do {
        uVar6 = (long)((ulong)uVar2 << 0x20) >> 0x23;
        if (uVar6 < __n) {
          uVar6 = (ulong)((byte)param_4[__n + ~uVar6] >> ((ulong)uVar2 & 7)) & 1;
        }
        else {
          uVar6 = 0;
        }
        uVar5 = (ulong)*(ushort *)(lVar8 + 8 + uVar5 * 0x10 + uVar6 * 2 + 4);
        puVar9 = (uint *)(lVar8 + 8 + uVar5 * 0x10);
        bVar1 = (int)uVar2 < (int)*puVar9;
        uVar2 = *puVar9;
      } while (bVar1);
    }
    if ((((__n == **(ushort **)(puVar9 + 2)) &&
         (iVar3 = memcmp(*(ushort **)(puVar9 + 2) + 1,param_4,__n), iVar3 == 0)) &&
        (uVar5 = (long)puVar9 + (-0x18 - lVar8), ((uVar5 ^ 0xffffffffffffffff) & 0xffffffff0) != 0))
       && (*(long *)(*(long *)(lVar7 + 0x28) + (long)(int)(uVar5 >> 4) * 8) != 0)) {
      uVar4 = FUN_0038bf50(param_2,param_3);
      return uVar4;
    }
  }
  local_54 = 0;
  local_58 = 0x676d6974;
  if ((*(char *)(param_1 + 0x40) == '.') && (*(char *)(param_1 + 0x41) == '\0')) {
    nn::util::SNPrintf(local_158,0xff,"%s/%s",&local_58,param_4);
    iVar3 = FUN_003640a0(param_1 + 8,local_158);
  }
  else {
    nn::util::SNPrintf(local_158,0xff,"%s/%s/%s",(char *)(param_1 + 0x40),&local_58,param_4);
    iVar3 = FUN_003640a0(param_1 + 8,local_158);
  }
  if (iVar3 != -1) {
    local_158[0] = '\0';
    local_158[1] = '\0';
    local_158[2] = '\0';
    local_158[3] = '\0';
    local_158[4] = '\0';
    local_158[5] = '\0';
    local_158[6] = '\0';
    local_158[7] = '\0';
    FUN_00364024(param_1 + 8,local_158,iVar3);
  }
  return 0;
}

