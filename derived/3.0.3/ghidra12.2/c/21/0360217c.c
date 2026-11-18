
void FUN_0360217c(long param_1,void *param_2,size_t param_3)

{
  void *__dest;
  long lVar1;
  
  __dest = (void *)(**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))
                             (*(long **)PTR_DAT_04bdf328,param_3,0);
  *(void **)(param_1 + 8) = __dest;
  memcpy(__dest,param_2,param_3);
  if (param_3 == 0x800000) {
    *(undefined1 *)(*(long *)(param_1 + 8) + 0x148) = 8;
    lVar1 = *(long *)(param_1 + 8);
    *(byte *)(lVar1 + 0x14d) =
         ~*(byte *)(lVar1 + 0x135) + ~*(byte *)(lVar1 + 0x134) +
         ~*(byte *)(lVar1 + 0x136) + ~*(byte *)(lVar1 + 0x137) +
         ~*(byte *)(lVar1 + 0x138) + ~*(byte *)(lVar1 + 0x139) + ~*(byte *)(lVar1 + 0x13a) +
         ~*(byte *)(lVar1 + 0x13b) + ~*(byte *)(lVar1 + 0x13c) + ~*(byte *)(lVar1 + 0x13d) +
         ~*(byte *)(lVar1 + 0x13e) +
         ~*(byte *)(lVar1 + 0x13f) + ~*(byte *)(lVar1 + 0x140) + ~*(byte *)(lVar1 + 0x141) +
         ~*(byte *)(lVar1 + 0x142) + ~*(byte *)(lVar1 + 0x143) +
         ~*(byte *)(lVar1 + 0x144) + ~*(byte *)(lVar1 + 0x145) + ~*(byte *)(lVar1 + 0x146) +
         ~*(byte *)(lVar1 + 0x147) + ~*(byte *)(lVar1 + 0x148) + ~*(byte *)(lVar1 + 0x149) +
         ~*(byte *)(lVar1 + 0x14a) + ~*(byte *)(lVar1 + 0x14b) + ~*(byte *)(lVar1 + 0x14c);
  }
                    /* WARNING: Could not recover jumptable at 0x03602338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0360233c + (ulong)(&BYTE_0419356d)[*(byte *)(*(long *)(param_1 + 8) + 0x147)] * 4)
  )(*(long *)(param_1 + 8) + 0x40104);
  return;
}

