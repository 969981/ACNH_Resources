
undefined8 FUN_003631f0(long param_1,char *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 local_170 [32];
  undefined4 local_70;
  undefined1 local_6c;
  
  lVar9 = *(long *)(param_1 + 0x10);
  do {
    if (lVar9 == param_1 + 8) {
      return 0;
    }
    lVar10 = *(long *)(lVar9 + 0x10);
    local_70 = 0x676d6974;
    local_6c = 0;
    pcVar8 = (char *)(lVar10 + 0x40);
    if ((*pcVar8 == '.') && (*(char *)(lVar10 + 0x41) == '\0')) {
      nn::util::SNPrintf((char *)local_170,0xff,"%s/%s",&local_70,"__Combined.bntx");
      iVar3 = FUN_003640a0(lVar10 + 8,local_170);
    }
    else {
      nn::util::SNPrintf((char *)local_170,0xff,"%s/%s/%s",pcVar8,&local_70,"__Combined.bntx");
      iVar3 = FUN_003640a0(lVar10 + 8,local_170);
    }
    if (iVar3 != -1) {
      local_170[0] = 0;
      lVar4 = FUN_00364024(lVar10 + 8,local_170,iVar3);
      if ((lVar4 != 0) && (lVar4 = FUN_0034fb8c(), lVar4 != 0)) {
        lVar4 = *(long *)(lVar4 + 0x38);
        if (param_2 == (char *)0x0) {
          __n = 0;
        }
        else {
          __n = strlen(param_2);
        }
        uVar5 = (ulong)*(ushort *)(lVar4 + 0xc);
        puVar7 = (uint *)((int *)(lVar4 + 8) + uVar5 * 4);
        uVar2 = *puVar7;
        if (*(int *)(lVar4 + 8) < (int)*puVar7) {
          do {
            uVar6 = (long)((ulong)uVar2 << 0x20) >> 0x23;
            if (uVar6 < __n) {
              uVar6 = (ulong)((byte)param_2[__n + ~uVar6] >> ((ulong)uVar2 & 7)) & 1;
            }
            else {
              uVar6 = 0;
            }
            uVar5 = (ulong)*(ushort *)(lVar4 + 8 + uVar5 * 0x10 + uVar6 * 2 + 4);
            puVar7 = (uint *)(lVar4 + 8 + uVar5 * 0x10);
            bVar1 = (int)uVar2 < (int)*puVar7;
            uVar2 = *puVar7;
          } while (bVar1);
        }
        if (((__n == **(ushort **)(puVar7 + 2)) &&
            (iVar3 = memcmp(*(ushort **)(puVar7 + 2) + 1,param_2,__n), iVar3 == 0)) &&
           ((((long)puVar7 + (-0x18 - lVar4) ^ 0xffffffffffffffffU) & 0xffffffff0) != 0))
        goto LAB_0036346c;
      }
    }
    lVar4 = lVar10 + 8;
    local_70 = 0x676d6974;
    local_6c = 0;
    if ((*pcVar8 == '.') && (*(char *)(lVar10 + 0x41) == '\0')) {
      nn::util::SNPrintf((char *)local_170,0xff,"%s/%s",&local_70,param_2);
      iVar3 = FUN_003640a0(lVar4,local_170);
    }
    else {
      nn::util::SNPrintf((char *)local_170,0xff,"%s/%s/%s",pcVar8,&local_70,param_2);
      iVar3 = FUN_003640a0(lVar4,local_170);
    }
    if (iVar3 != -1) {
      local_170[0] = 0;
      lVar10 = FUN_00364024(lVar4,local_170,iVar3);
      if (lVar10 != 0) {
LAB_0036346c:
        return *(undefined8 *)(lVar9 + 0x10);
      }
    }
    lVar9 = *(long *)(lVar9 + 8);
  } while( true );
}

