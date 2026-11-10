
bool FUN_00197494(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong __n;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  uVar3 = *(ulong *)(lVar1 + 0x18);
  uVar4 = uVar3 - lVar2;
  __n = param_3;
  if (uVar4 < param_3) {
    *(undefined1 *)(param_1 + 8) = 1;
    __n = uVar4;
  }
  if (__n != 0) {
    if (uVar3 < __n + lVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Buffer.cpp",0xe8,0xe0000019,
                   0);
    }
    memcpy(param_2,(void *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2),__n);
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + __n;
  }
  return param_3 <= uVar4;
}

